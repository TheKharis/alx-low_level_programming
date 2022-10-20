#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 */

void print_line(int n)
{
	int x;

	if (n > 0)
		for (x = 0; x < n; x++)
			_putchar('_');
	_putchar('\n');
}

