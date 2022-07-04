#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table.
 * @size: size of the array of linked list in the table.
 *
 * Return: shash_table_t struct.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;

	if (size == 0)
		return (NULL);

	sht = calloc(1, sizeof(shash_table_t));
	if (!sht)
		return (NULL);

	sht->size = size;
	sht->array = calloc((size_t)sht->size, sizeof(shash_node_t *));
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}

	return (sht);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: The hash table to add the element to.
 * @key: The key of the element, will give the index in the array.
 * @value: The value of the element to store in the array.
 *
 * Return: 1 on success, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (check_key_s(ht->array[index], key))
		return (replace_value_s(&ht->array[index], key, value));
	new = add_node_s(&ht->array[index], key, value);
	if (!new)
		return (0);

	insert_sort(new, ht);
	return (1);
}

/**
 * insert_sort - inserts a node in a sorted doubly linked list.
 * @node: shash_node_t to be inserted.
 * @ht: The pointer to the hash table to insert it into.
 */
void insert_sort(shash_node_t *node, shash_table_t *ht)
{
	shash_node_t *head = ht->shead;

	if (!head || strcmp(node->key, head->key) < 0)
	{
		ht->shead = node;
		if (!head)
			ht->stail = node;
		else
		{
			node->snext = head;
			head->sprev = node;
		}
		return;
	}

	while (head->snext && strcmp(node->key, head->snext->key) >= 0)
		head = head->snext;

	node->sprev = head;
	if (!head->snext)
		ht->stail = node;
	else
		head->snext->sprev = node;
	node->snext = head->snext;
	head->snext = node;
}
/**
 * shash_table_get - Retrieves the value that is associated with a key.
 * @ht: The hash table to look into.
 * @key: The key of the value to be retrieved.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a hash table.
 * @ht: The hash table to be printed.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head = NULL;

	if (!ht)
		return;

	head = ht->shead;

	printf("{");
	while (head)
	{
		printf("'%s': '%s'", head->key, head->value);
		if (head->snext)
			printf(", ");
		head = head->snext;
	}

	printf("}\n");
}
/**
 * shash_table_print_rev - Prints a hash table in reverse.
 * @ht: The hash table to be printed.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail = NULL;

	if (!ht)
		return;

	tail = ht->stail;

	printf("{");
	while (tail)
	{
		printf("'%s': '%s'", tail->key, tail->value);
		if (tail->sprev)
			printf(", ");
		tail = tail->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table.
 * @ht: Hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	if (!ht)
		return;

	free_list_s(ht->shead);
	free(ht->array);
	free(ht);
}

/**
 * replace_value_s - Replaces the value at a pre-existing key.
 * @ht: The double pointer to the shash_node_t list.
 * @key: The new key to be added in the node.
 * @value: The value to be added in the node.
 *
 * Return: 1 on success, 0 on failure.
 */
int replace_value_s(shash_node_t **ht, const char *key, const char *value)
{
	shash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(value);
	if (!temp->value)
		return (0);
	return (1);
}

/**
 * check_key_s - checks if a key exists in a hash table.
 * @ht: The pointer to the shash_node_t list.
 * @key: The key to look for.
 *
 * Return: 1 if the key is found, otherwise 0.
 */
int check_key_s(shash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);
		ht = ht->next;
	}

	return (0);
}

/**
 * add_node_s - Adds a new node at the beginning of a linked list.
 * @head: The double pointer to the shash_node_t list.
 * @key: The new key to add in the node.
 * @value: The value to be added in the node.
 *
 * Return: The address of the new element, otherwise NULL if it fails.
 */
shash_node_t *add_node_s(shash_node_t **head, const char *key,
	const char *value)
{
	shash_node_t *new;

	new = calloc(1, sizeof(shash_node_t));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		free(new->key);
		return (NULL);
	}

	if (*head == NULL)
		(*head) = new;
	else
	{
		new->next = (*head);
		(*head) = new;
	}

	return (*head);
}

/**
 * free_list_s - Frees a linked list.
 * @head: The shash_node_t list to be freed.
 */
void free_list_s(shash_node_t *head)
{
	shash_node_t *temp;

	while (head)
	{
		temp = head->snext;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}
