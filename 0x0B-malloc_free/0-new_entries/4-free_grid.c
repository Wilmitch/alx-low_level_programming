#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}

int **alloc_grid(int width, int height)
{
        int **p;
        int i, j;

        if (width == 0 || height == 0)
                return (NULL);
        //allocate 2d array pointer
        p = (int **) malloc(sizeof(int *) * height);

        if ( p == NULL)
                return (NULL);

        //allocate array width
        for (i = 0; i < height; i++)
        {
                p[i] = (int *) malloc(sizeof(int) * width);

                if (p[i] == NULL)
                {
                        free(p);
                        for (j = 0; j < i; j++)
                                free(p[j]);
                        return (NULL);
                }
        }

        //initializing the array
        for (i = 0; i < height; i++)
        {
                for (j = 0; j < width; j++)
                        p[i][j] = 0;
        }

        return (p);
}

//free the grid
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || height == 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
