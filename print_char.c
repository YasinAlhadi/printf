#include "main.h"
/**
 * ch - print character
 * @character: list arg
 *
 * Return: character
 */
int ch(va_list character)
{
	return (_putchar(va_arg(character, int)));
}
