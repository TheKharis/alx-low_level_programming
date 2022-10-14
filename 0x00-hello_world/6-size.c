#include <stdio.h>
/**
 * main - Entry point
 *
 * Result: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char is: %2d byte(s)\n", sizeof(char));
	printf("Size of an int is: %2d byte(s)\n", sizeof(int));
	printf("Size of a long int is: %2d byte(s)\n", sizeof(long int));
	printf("Size of a long long int is: %2d byte(s)\n", sizeof(unsigned long));
	printf("Size of a float is: %2d byte(s)\n", sizeof(float));
	return (0);
}
