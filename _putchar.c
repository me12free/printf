#include "main.h"

/**
 * _putchar - output char c to stdout
 * @c: char to print
 * Return: 1 on success and -1 is returned on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
