#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: void means it should not have any value or empty
 * Return: Always void (success)
 */

int main(void)
{
	printf("Size of a char:%d byte(s)", sizeof(char));
	printf("Size of an int:%d byte(s)", sizeof(int));
	printf("Size of  long int:%d byte(s)", sizeof(long int));
	printf("Size of a long long int:%d byte(s)", sizeof(long long int));
	printf("Size of a float:%d byte(s)", sizeof(float));
	return (0);
}
