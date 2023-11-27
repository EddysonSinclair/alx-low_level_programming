#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int *ptr, i, j, total_length;

	total_length = width * height;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **) malloc(sizeof(int) * height);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		{
			ptr[i] = (int *) malloc(sizeof(int) * width);

			if (ptr[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(ptr[j]);
			}
			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
	return (ptr);
}
