#include "main.h"

/**
 * print_rev - A prints a string, in reverse, followed by a new line.
 * @s: Input string
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0' index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
