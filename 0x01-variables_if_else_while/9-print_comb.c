#include <stdio.h>
/**
 * main -Prog Entry point
 * Description: This is a program about diversity of line features
 * Return - Always 0 success
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
