#include <unistd.h>
/**
 * *_ptchar - writes character c to stdout
 * return on success 1
 * on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
