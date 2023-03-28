#include <stdio.h>
#include "main.h"

/**
 * print_i - entry point
 * @n: variable
 * Return: ...
 */

int print_i(int n)
{
	int x = 1, y, r = 0;

	if (n < 0)
	{
		_putchar('-');
		r = 2;
		n = -n;
	}

	while ((n / x) >= 10)
	{
		x = x * 10;
	}

	while (x > 0)
	{
		y = n / x;
		_putchar(y + 48);
		r = r + 1;
		n = n % x;
		x = x / 10;
	}
	return (r - 1);
}
