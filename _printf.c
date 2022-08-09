#include "main.h"
/**
 * print_op - function to print op (specifier )
 * @format: passed string
 * @print_ar: array of struct op
 * @list: list of arguments to print
 *
 * Return: char
 */
int print_op(const char *format, check_t *print_ar, va_list list)
{
	char a;
	int count, b, c;

	count = 0;
	b = 0;
	a = format[b];
	while (a != '\0')
	{
		if (a == '%')
		{
			c = 0;
			b++;
			a = format[b];
			while (print_ar[c].type != NULL &&
					a != *(print_ar[c].type))
				c++;
			if (print_ar[c].type != NULL)
				count += print_ar[c].f(list);
			else
			{
				if (a == '\0')
					return (-1);
				if (a != '%')
					count += _putchar('%');
				count += _putchar(a);
			}
		}
		else
			count += _putchar(a);
		b++;
		a = format[b];
	}
	return (count);
}

/**
 * _printf - produces output according to a format
 * @format: passed srting
 *
 * Return: char
 */
int _printf(const char *format, ...)
{
	va_list list;
	int a = 0;

	check_t op[] = {
		{"c", ch},
		{"s", str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(list, format);
	a = print_op(format, op, list);
	va_end(list);
	return (a);
}
