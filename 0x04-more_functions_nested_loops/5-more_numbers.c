#include "main.h"

/**
 * more_numbers - print numbers from 9 to 14, 10 times.
 */
void more_numbers(void)
{
	int i, n;

	for ( i = 1; i < 10 ; i++ )
	{
		for ( n = 48; n < 63; n++)
		{
			if ( n >= 58)
			{
				_putchar(49);
				_putchar(n - 10);
			}
			else
				_putchar(n);
		}
		_putchar('\n');
	}
}
