#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-main block
 * Assign a random number
 * to n to check whether
 * a number is positive , negative or equal
 * to zero.
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d" is positive\n",n);
	}
	elseif(n==0)
	{
		printf("%d is zero\n",n);
	}
	else
	{
		printf("%d is negative\n",n);
	}
	return (0);
}
