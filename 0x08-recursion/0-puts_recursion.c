#include "main.h"

/**
 * _puts_recursion - main - check the code
 * @s: character of string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_putchar(*s);
		_putchar_recursions(s + 1);
	}
	if (*(s) == '\0')
		_putchar('\n');
}
