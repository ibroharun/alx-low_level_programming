#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = o; s[i] != '\0'; j++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[i])
			{
				s[i] = b[j];
				break;
			}
		}
	}

	return (s);
}
