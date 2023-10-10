#include <stdio.h>
/**
 * main - Entry pint
 * Return: Always 0 (success)
 */
int main(void)
{
	print("Size of char: %zi byte(s) \n", sizeof(char));
	print("Size of char: %zi byte(s) \n", sizeof(int));
	print("Size of char: %zi byte(s) \n", sizeof(long));
	print("Size of char: %zi byte(s) \n", sizeof(long long int));
	print("Size of char: %zi byte(s) \n", sizeof(float));
	return (0);
}
