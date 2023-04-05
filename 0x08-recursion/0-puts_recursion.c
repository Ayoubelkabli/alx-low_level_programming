#include "main.h"

/**
 * Function that print the characters of a string
 * _puts_recursion - a function that prints a new line
 * @s: the string
 * Returns (0)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
