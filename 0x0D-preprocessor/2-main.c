#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * followed by a new line
 *
 * @__FILE__ - macro that prints the name of the input file
 * Return: Always  0.
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
