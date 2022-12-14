#include "main.h"

/**
 * print_alphabet_x10 - print a - z ten times
 *
 */

void print_alphabet_x10(void)

{
	int i;
	char j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}

}
