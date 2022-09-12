#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - entry point
 *
 *  Description:  prints all possible different combinations of two digits.
 *  Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; ++i)
	{
		for (j = i + 1; j < 10; ++j)
		{
		putchar('0' + i);
		putchar('0' + j);

		if (i != 8 || j != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}

	putchar('\n');
	return (0);
}
