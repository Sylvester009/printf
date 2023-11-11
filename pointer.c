#include "main.h"
#include <stdio.h>

int _num_len(unsigned long num, int base)
{
    int len = 0;

    if (num == 0)
        return 1;

    while (num > 0)
    {
        num /= base;
        len++;
    }

    return len;
}

/**
 */

void _print(va_list char_lists, int *char_print)
{
    void *address = va_arg(char_lists, void*);
    printf("%p", address);
    *char_print += _num_len((unsigned long)address, 16) + 2;
}
