#include "main.h"

/**
 * _putchar - writes the character c
 * @c: The character to print
 *
 * Return: c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
