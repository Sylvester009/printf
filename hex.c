#include "main.h"
#include <stdio.h>

/**
 * _hex - handles %x and %X specifier
 * @char_lists: argument list
 * @char_print: char to be printed
 */

void _hex(va_list char_lists, int *char_print, int uppercase)
{
	int rem;
	unsigned int num = va_arg(char_lists, unsigned int);

	char buff[32];
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		(*char_print)++;
		return;
	}

	while (num > 0)
	{
		rem  = num % 16;

		buff[i++] = (rem < 10) ? rem + '0' : rem - 10 + (uppercase ? 'A' : 'a');

		num /= 16;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(buff[i]);
		(*char_print)++;
	}
}
