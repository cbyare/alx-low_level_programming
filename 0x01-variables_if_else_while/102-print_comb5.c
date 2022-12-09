#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;
	int c;

	for (numbers = 0; numbers < 100; numbers++)
	{
		for (c = 0; c < 100; c++)
		{
			if (numbers < c)
			{
				putchar((numbers / 10) + 48);
				putchar((numbers % 10) + 48);
				putchar(' ');
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				if (numbers != 98 || c != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
