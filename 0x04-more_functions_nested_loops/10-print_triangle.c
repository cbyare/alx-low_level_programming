#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{i
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
