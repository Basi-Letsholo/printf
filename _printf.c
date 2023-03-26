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

	va_list args;

	va_start(args, format);
	vprintf(format, args);
	va_end(args);

	return (0);
}

/*      char c;
        char str[100];
        int i = 0, j, r;

        va_list args;

        va_start(args, format);
        if (format[i] == '%')
        {
                c = format[i + 1];
        }
        switch (c)
        {
                case 'c':
                        str[0] = va_arg(args, int);
                        _putchar (str[0]);
                        r = 1;
                        break;
                case 's':

                str = va_arg(args, int);
                        for (j = 0; *str != '\0'; j++)
                        {
                                str[j] = va_arg(args, int);
                                _putchar(str[j]);
                        }
                        r = j;
                        break;
                default:
                        return (0);
        }

*/
