#include "main.h"

/**
 * rev_string -Reverses astring in place.
 *
 * @s: A pointer to the string to be reversed.
 *
 * Description: function takes a pointer to a string and reverses it
*/
void rev_string(char *s)
{
	int length = 0, i;
	char temp;

	while (*(s + length) != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + length - i - 1);
		*(s + length - i - 1) = temp;
	}
}
