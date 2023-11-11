#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * cases - function for cases checking specifier
 * @char_lists: argument list
 * @spec: specifiers
 * Return: success
 */

int cases(va_list char_lists, char spec)
{
	int char_print = 0;

	switch (spec)
	{
		case 'c':
		case 's':
		case 'd':
		case 'i':
		case '%':
			_specifiers(char_lists, spec, &char_print);
			break;
		case 'u':
			_un_sign(char_lists, &char_print);
			break;
		case 'o':
			_octal(char_lists, &char_print);
			break;
		case 'x':
		case 'X':
			_hex(char_lists, &char_print, (spec == 'X'));
			break;
		case 'b':
			_binary(char_lists, &char_print);
			break;
		case 'p':
			_print(char_lists, &char_print);
			break;
		default:

			_putchar('%');
			_putchar(spec);
			char_print += 2;
			break;
	}

	return (char_print);
}

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return:  number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list char_lists;

	int char_print = 0;

	va_start(char_lists, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			char_print = cases(char_lists, *format);
		}
		else
		{
			_putchar(*format);
			char_print++;
		}
		format++;
	}
	va_end(char_lists);

	return (char_print);
}
