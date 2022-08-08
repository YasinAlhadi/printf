#include "main.h"

/**
 * str - print string
 * @string: list arg
 *
 * Return: string
 */
int str(va_list string)
{
	int len;
	char *str, st;

	str = va_arg(string, char *);
	if (str == NULL)
		str = "NULL";
	for (len = 0; str[len] != '\0'; len++)
	{
		st = _putchar(str[len]);
	}
	return (st);
}
/**
 * _strlength - gets string length
 * @string: string
 *
 * Return: len
 */
int _strlength(char *string)
{
	int len;

	len = 0;
	while (string[len] != '\0')
	{
		len++;
	}
	return (len);
}
