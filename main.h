#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct check - function to check format
 * @type: format type to print
 * @f: print function
 */
typedef struct check
{
	char *type;
	int (*f)();
} check_t;
int _putchar(char c);
int print_op(const char *format, check_t *print_ar, va_list list);
int ch(va_list character);
int str(va_list string);
int _strlength(char *string);
int _printf(const char *format, ...);
#endif
