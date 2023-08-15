#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("Then this %d is positive\n", n);
	}						
	else if (n == 0)
	{						
		printf("Then this %d is zero\n", n);
	}
	else
	{	
		printf("Truly this %d is negative\n", n);
	}
	return (0);
}
