#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** main -  Prints last digital number of a randomly generated number
 *          and indicates it is grather than 5, equal to 0 or less than 6.
 *
 *  Return: Always 0.
 */
int main(void)
{
	int n, a;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;


	if (a > 5)
	{
		printf("Last digit of %d and is %d greater than 5\n", n, a);
	}
	else if (a == 5)
	{
		printf("Last digit of %d and is %d 0\n", n, a);
	}
	else
	{
		printf("Last digit of %d and is %d less than 6 and not 5\n", n, a);
	}

	return (0);

}
