#include "main.h"
/**
 * jack_bauer -  print every minute
 * Description: prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	char h, m;
	int i = 0;
	int j = 0;

	while (i < 24)
	{
		for (h = '0'; h < '10'; h++)
		{
		while ( i < 60)
		{
			for (m  = '0'; m < '10'; m++)
			{
				_putchar("00:0", m);
			}
			for (m = 10; m < '60'; m++)
			{
				_putchar("00:", m);
			}
		}
		}
		for (h = 10; h < 24; h++)
		{
			while ( i < 60)
			{
				for  (m = 0; m < 10; m++)
				{
					_putchar(h, ":", "0", m);
				}
				for (m = 10; m < 60; m++)
				{
					_putchar(h, ":", m);
				}
			}
		}
	}
}



		i++;
	}
