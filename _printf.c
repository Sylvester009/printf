#include <stdarg.h>
#include <stdio.h>
#include "main.h"

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

			switch (*format)
			{
				case 'c':
				case 's':
				case 'd':
				case 'i':
				case '%':
					_specifiers(char_lists, *format, &char_print);
					break;
				case 'u':
					_un_sign(char_lists, &char_print);
					break;
				case 'o':
					_octal(char_lists, &char_print);
					break;
				case 'x':
				case 'X':
					_hex(char_lists, &char_print, (*format == 'X'));
					break;
				case 'b':
					_binary(char_lists, &char_print);
					break;
				case 'p':
					_print(char_lists, &char_print);
					break;
				default:
					_putchar('%');
					_putchar(*format);
					char_print += 2;
					break;
			}
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
