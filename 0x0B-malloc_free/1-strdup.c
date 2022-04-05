#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a new string
 * @str:string duplicated
 *
 * Return: NULL for insufficient space and ptr for success
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int x, len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	ptr = (char *)malloc(len * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);
	for (x = 0; x <= len; x++)
		ptr[x] = str[x];

	return (ptr);
}
