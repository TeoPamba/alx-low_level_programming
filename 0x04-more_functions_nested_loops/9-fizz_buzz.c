#include <stdio.h>
/**
 * main - print numbers 1 to 100 with fizz, Buzz or FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("fizzBuzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
