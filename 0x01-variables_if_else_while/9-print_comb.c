#include <stdio.h>

/**
 * main - prints 0-9 separated with commas, using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{

		putchar(n + '0');
	        if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
