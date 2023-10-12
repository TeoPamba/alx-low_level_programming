#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig = 0;

	while (dig < 10)
	{
		putchar(dig + '0');
		dig++;
	}
	putchar('\n');
	return (0);
}
