#include "main.h"

/**
 *Main -  the definition of the function and it gives all the letters.
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
