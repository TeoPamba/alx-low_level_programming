#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbrs from n to 98
 * @n: number
 * Return: number n
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n == 98)
	{
		printf("%d, ", n);
	}
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("\n");
}
