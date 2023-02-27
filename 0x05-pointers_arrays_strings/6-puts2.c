#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)
		{
			putchar(str[c]);
		}
		c++;
	}
	putchar('\n');
}
