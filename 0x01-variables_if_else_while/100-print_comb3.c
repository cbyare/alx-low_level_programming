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

	for (numbers = 48; numbers <= 56; numbers++)
	{
		for (c = 49; c <= 57; c++)
		{
			if (c > numbers)
			{
				putchar(numbers);
				putchar(c);
				if (numbers != 56 || c != 57)
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
