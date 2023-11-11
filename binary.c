#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _binary - handle b specifier
 * @char_lists: argument lists
 * @char_print: pointer to char to be printed
 *
 * Return: Void
 */

void _binary(va_list char_lists, int *char_print)
{
	char s;
	unsigned int num = va_arg(char_lists, unsigned int);

	unsigned int bin[64];
	int i = 0;

	while (num > 0)
	{
		bin[i] = num % 2;
		num /= 2;
		i++;
	}

	for (; i >= 0; i--)
	{
		s = '0' + bin[i];
		_putchar(s);
		(*char_print)++;
	}
}
