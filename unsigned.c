#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _un_sign - handle %u specifier
 * @char_lists: argument lists
 * @char_print: char to be printed
 *
 * Return: void
 */

void _un_sign(va_list char_lists, int *char_print)
{
	int i;
	char s;
	unsigned int num = va_arg(char_lists, unsigned int);

	int digits = 0;

	unsigned int temp = num;

	do {
		temp /= 10;
		digits++;
	}

	while (temp > 0);

	for (i = digits - 1; i >= 0; i--)
	{
		s = '0' + ((num / ten_power(i)) % 10);
		_putchar(s);
		(*char_print)++;
	}
}
