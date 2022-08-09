#include "main.h"
/**
 * print_int - print integer
 * @integ: printed list
 *
 * Return: int number
 */
int print_int(va_list integ)
{
	int a, b, len;
	unsigned int n;

	b = 1;
	len = 1;
	len = 0;
	a = va_arg(integ, int);
	if (a < 0)
	{
		len = len + _putchar('-');
		n = a * -1;
	}
	else
		n = a;
	while (n / b > 9)
		b *= 10;
	while (b != 0)
	{
		len = len + _putchar(n / b + '0');
		n = n % b;
		b /= 10;
	}
	return (len);
}
