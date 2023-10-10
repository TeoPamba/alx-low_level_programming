#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %zi byte(s) \n", sizeof(char));
	printf("Size of an int: %zi byte(s) \n", sizeof(int));
	printf("Size of a long int: %zi byte(s) \n", sizeof(long int));
	printf("Size of a long long int: %zi byte(s) \n", sizeof(long long int));
	printf("Size of a float: %zi byte(s) \n", sizeof(float));
	return (0);
}
