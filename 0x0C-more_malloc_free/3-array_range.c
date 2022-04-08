#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: min values
 * @max: max values
 *
 * Return: NULL if min > max
 * NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == 0)
		return (NULL);

	for (i = min; i <= max; i++)
		p[i] = i;

	return (p);
}
