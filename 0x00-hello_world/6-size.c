#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	printf("Size of an int is %zu byte(s)\n", sizeof(int));
	printf("size od a char is %zu byte(s)\n", sizeof(char));
	printf("Size of a long int is %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int is %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float is %zu byte(s)\n", sizeof(float));
	return (0);
}
