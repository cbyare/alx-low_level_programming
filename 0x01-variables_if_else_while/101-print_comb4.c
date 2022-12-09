#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers, c, d;

	for (numbers = 48; numbers < 58; numbers++)
	{
		for (c = 49; c < 58; c++)
		{
			for (d = 50; d < 58; d++)
			{
				if (d > c && c > numbers)
				{
					putchar(numbers);
					putchar(c);
					putchar(d);
					if (numbers != 55 || c != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
