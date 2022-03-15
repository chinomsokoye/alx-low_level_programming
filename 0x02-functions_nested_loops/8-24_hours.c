#include "main.h"

/**
 * jack_bauer - print every min of the day of jack bauer
 * starting 00:00 - 23:59
 *
 */

void jack_bauer(void)
{
	int h, m;

	h = 0;

	while (h < 24)
	{
		m = 0;

		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
