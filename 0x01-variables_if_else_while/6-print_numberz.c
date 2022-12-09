#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 48; numbers < 58; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');
	return (0);
}
