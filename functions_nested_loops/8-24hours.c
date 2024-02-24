#include"main.h"
/**
 * jack_bauer - print hour from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hh, mn;

	for (hh = 0; hh < 24 ; hh++)
		for (mn = 0; mn < 60 ; mn++)
		{
			_putchar('0' + hh / 10);
			_putchar('0' + hh % 10);
			_putchar(':');
			_putchar('0' + mn / 10);
			_putchar('0' + mn % 10);
			_putchar('\n');
			/*
			* fflush(stdout);
			* printf("helloooo %02d:%02d\n", hh , mn);
			*/
		}

}
