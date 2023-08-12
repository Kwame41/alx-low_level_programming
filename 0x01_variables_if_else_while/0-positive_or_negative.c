#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("Then this (%d,n) is positive\n")
	else if (n == 0)
		printf("Then this (%d,n) is zero\n")
	else
		printf("Truly this (%d,n) is negative\n")
	return (0);
}
