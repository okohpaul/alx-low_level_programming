#include <stddef.h>
#include "main.h"

/**
 * swap_int - swaps the values of int a and int b
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
