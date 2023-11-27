#include "main.h"
#include <stdio.h>
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
	int *ptr, i, width_length, height_length, total_length;

	width_length = strlen(width);
	height_length = strlen(height);
	total_length = width_length + height_length;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int *) malloc(sizeof(int) * total_length);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width_length; i++)
		width[i] = 0;
	for (i = 0; i < height_length; i++)
		height[i] = 0;
	return (ptr);
}
