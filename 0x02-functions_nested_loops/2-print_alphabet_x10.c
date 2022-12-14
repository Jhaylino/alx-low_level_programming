#include "main.h"

/**
 * print_alphabet_x10 - print a - z ten times
 *
 */

void print_alphabet_x10(void)

{
	int b;
	char u;

	for (b = 0; u < 10; b++)
	{
		for (u = 'a'; u <= 'z'; u++)
		{
			_putchar(u);
		}

		_putchar('\n');
	}

}
