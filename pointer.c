#include "main.h"
#include <stdio.h>

/**
 * _print - handles %p specifier
 * @char_lists: argument list
 * @char_print: char to be printed
 *
 * Return: void
 */

void _print(va_list char_lists, int *char_print)
{
	void *ptr = va_arg(char_lists, void *);

	unsigned long add = (unsigned long)ptr;

	unsigned long d = 16;

	_putchar('x');
	_putchar('0');

	while (d <= add)
		d *= 16;

	while (d > 1)
	{
		d /= 16;

		_putchar((add / d < 10) ? (add / d) + '0' : (add / d) - 10 + 'a');
		add %= d;

		(*char_print)++;
	}
}
