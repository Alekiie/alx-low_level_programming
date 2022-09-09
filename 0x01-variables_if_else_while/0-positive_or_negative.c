#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Assigning a random number 
 * as n and each time is executed, the compiler checks whether
 * the  number which is stored
 * in the variable is either
 * positive, negative or equal to zero.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
		printf("%i is positive\n", n);
	else if (n<0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n" , n);



	return (0);
}
