#include <stdio.h>
/**
 * main - Entry point
 * Return: ALways 0 (success)
 */
int main(void)
{
	char alpha_low = 'a';
	char alpha_up = 'A';

	while (alpha_low <= 'z')
	{
		putchar(alpha_low);
		alpha_low++;
	}
	while (alpha_up <= 'Z')
	{
		putchar(alpha_up);
		alpha_up++;
	}
	putchar('\n');
	return (0);
}
