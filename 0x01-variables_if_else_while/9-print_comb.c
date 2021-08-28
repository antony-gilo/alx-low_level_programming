#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c <= 56)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);
	return (0);
}
