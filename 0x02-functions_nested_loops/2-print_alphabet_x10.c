#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char alph;
	int i;

	i = 0;
	while (i <= 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alp++;
		}
		_putchar('\n');
		i++;
	}
}

