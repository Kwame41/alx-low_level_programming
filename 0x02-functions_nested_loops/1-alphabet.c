#include "main.h"

/**
 *Main -  Entry point
 *
 *Description - print_alphabet gives the full alphabet in lowercases.
 *
 * Return - void
 */



void print_alphabet(void)/*it is used to give the letters*/
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
