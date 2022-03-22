#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: String pointer
 * Return: void
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
	{
		_putchar(s[x]);
	}
}
