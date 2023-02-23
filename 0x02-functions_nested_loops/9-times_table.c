#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i;
	int j;
	int ab;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			ab = i * j;
			_putchar(',');
			_putchar(' ');
			if (ab <= 9)
			{
				_putchar(' ');
				_putchar(ab + '0');
			}
			else
			{
				_putchar((ab / 10) + '0');
				_putchar((ab % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
