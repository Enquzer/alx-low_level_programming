#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * alloc_grid - Entry point
 *  @width: rows of matrix
 *  @height: columns of string
 *  Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int j, i;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}

	return (arr);
}
