#include <stdio.h>
/**
 * main - print numbers 1 to 100 with fizz at multiples of 3 and buzz at multiples of
 * 	five and fizzbuzz for both
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if((num % 3) == 0 && (num % 5) == 0)
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
