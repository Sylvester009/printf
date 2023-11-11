#include "main.h"
#include <stdio.h>

/**
 * _octal - handles %o specifier
 * @char_lists: argument list
 * @char_print: char to be printed
 *
 * Return: void
 */

void _octal(va_list char_lists, int *char_print)
{
	char s;
	int i;
	unsigned int num = va_arg(char_lists, unsigned int);

	int digits = 0;

	unsigned int temp = num;

	do {
		temp /= 8;
		digits++;
	}

	while (temp > 0);

	for (i = digits - 1; i >= 0; i--)
	{
		s = '0' + ((num >> (i * 3)) & 7);

		_putchar(s);
		(*char_print)++;
	}
}
