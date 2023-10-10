#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of char: %zi byte(s) \n", sizeof(char));
	printf("Size of int: %zi byte(s) \n", sizeof(int));
	printf("Size of long int: %zi byte(s) \n", sizeof(long int));
	printf("Size of long long int: %zi byte(s) \n", sizeof(long long int));
	printf("Size of float: %zi byte(s) \n", sizeof(float));
	return (0);
}
