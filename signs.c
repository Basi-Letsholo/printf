#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * special_signs - prints special characters
 * @count: ...
 * @...: lits of arguments to go through
 * Return: result
 */

char special_signs(int count, ...)
{

char result = '+';

va_list args;

int i;

va_start(args, count);
for (i = 0; i < count; i++)
{
char ch = va_arg(args, int);

if (ch == '+')
{
result = '+';
}

else if (ch == '#')
{
result = '#';
}
else if (ch == ' ')
{
result = ' ';
}
}
va_end(args);


return (result);
}
