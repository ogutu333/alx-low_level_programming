#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 * Return: Always 0
 */
void more_numbers(void)
{
	int num, a;

	for (a = 0, a <= 9; a++)
	{
		for (num = 0; num <= 9; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
