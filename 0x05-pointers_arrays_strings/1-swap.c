#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap values for two numbers
 * @a: number
 * @b: number
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

	printf("\nValues of a = %d and b = %d ", *a, *b);
}
