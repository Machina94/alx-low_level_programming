#include "main.h"
/**
 * _strlen - Return length of a string
 * @s: String variable
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int r;

	r = 0;
	while (s[r] != '\0')
	{
		r++;
	}
	return (r);
}
