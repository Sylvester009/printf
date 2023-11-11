#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _specifiers(va_list char_lists, char spec, int *char_print);
void _binary(va_list char_lists, int *char_print);
unsigned int ten_power(int n);
void _un_signed(va_list char_lists, int *char_print);
void _octal(va_list char_lists, int *char_print);
void _hex(va_list char_lists, int *char_print, int uppercase);
void print_number(int n);
int _num_len(unsigned long num, int base);
void _print(va_list char_lists, int *char_print);

#endif
