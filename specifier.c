#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_number - function used for printing integers
 * @n: number/integer
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * _specifiers - handles format specifiers
 * @char_lists: argument list
 * @spec: specifier
 * @char_print: pointer to char to be printed
 *
 * Return: void
 */

void _specifiers(va_list char_lists, char spec, int *char_print)
{
	int n;
	char *str;

	switch (spec)
	{
		case 'c':
			_putchar(va_arg(char_lists, int));
			(*char_print)++;
			break;
		case 's':
			str = va_arg(char_lists, char *);

			while (*str != '\0')
			{
				_putchar(*str);
				str++;
				(*char_print)++;
			}
			break;
		case 'i':
		case 'd':
			n = va_arg(char_lists, int);
			print_number(n);
			(*char_print)++;
			break;
		case '%':
			_putchar('%');
			(*char_print)++;
			break;
	}
}
