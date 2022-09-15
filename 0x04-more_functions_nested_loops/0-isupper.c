#include "main.h"

/**
 * i_supper - checks whether for uppercase character
 * @c: function argument
 * Return: 1 if true 0 if false
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
