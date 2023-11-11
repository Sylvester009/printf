#include "main.h"
#include <stdio.h>

/**
 * ten_power - ten raised to the power of n
 * @n: exponent
 *
 * Return: res
 */

unsigned int ten_power(int n)
{
	int i;
	unsigned int res = 1;

	for (i = 0; i < n; i++)
	{
		res *= 10;
	}
	return (res);
}
