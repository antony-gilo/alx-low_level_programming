#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: number to be used
 *
 * Return: Doesn't return anything, void
 */
void print_times_table(int n)
{
	int j, i, product, x;

	if (n <= 15 && n >= 0)
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= n; i++)
			{
				product = j * i;
				if (i != 0)
				{
					_putchar(',');
					for (x = len(product); x <= 3; x++)
						_putchar(' ');
				}
				if (product > 99)
				{
					_putchar(product / 100 + '0');
					_putchar(((product / 10) % 10) + '0');
				}
				else if (product > 9 && product <= 99)
				{
					_putchar(product / 10 + '0');
				}
				_putchar(product % 10 + '0');
			}
			_putchar(10);
		}
	}
}

/**
 * len - counts the number of digits in a number
 * @n: number to be used
 *
 * Return: returns the number of digits
 */
int len(int n)
{
	int out = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		out++;
	}
	return (out);
}
