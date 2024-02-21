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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("%d Last digit of and is greater than 5\n", n%10);
	}
	else if (n == 5)
	{
		printf("%d Last digit of and is o\n", n%10);
	}
	else
	{
		printf("%d Last digit of and is less than 6 and not 0\n", n%10);
	}

	return (0);

}
