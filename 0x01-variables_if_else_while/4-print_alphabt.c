
#include<stdio.h>

/**
 *main-Entry point
 *Description:print all the lowercase of the letters, except q&e
 *Return:Always 0(Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 113 || n == 101)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar ('\n');
	return (0);
}

