#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - our own printf function
 * @format: specifiers
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	char c, *str;
	int i = 0, r = 0, j, n, ni, r1, r2;
	va_list args;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			c = (char)va_arg(args, int);
			_putchar(c);
			r++;
			i = i + 2;
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			str = va_arg(args, char *);
			for (j = 0; str[j] != '\0'; j++)
			{
				_putchar(str[j]);
				r++;
			}
			i = i + 2;
		}
		if (format[i] == '%' && format[i + 1] == 'd')
		{
			n = va_arg(args, int);
			r1 = print_int(n);
			r = r + r1;
			i = i + 2;
		}
		if (format[i] == '%' && format[i + 1] == 'i')
		{
			ni = va_arg(args, int);
			r2 = print_i(ni);
			r = r + r2;
			i = i + 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
			r++;
		}
	}
	va_end(args);
	return (r);
}
