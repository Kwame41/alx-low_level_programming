#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 *main - Entry point
 *Return-Always 0(success)
 */



int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("This %d is positive\n", n);
	}						
	else if (n == 0)
	{						
		printf("This %d is zero\n", n);
	}
	else
	{	
		printf("This %d is negative\n", n);
	}
	return (0);
}
