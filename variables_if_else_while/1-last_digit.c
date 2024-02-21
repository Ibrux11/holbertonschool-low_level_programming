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
	int a = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("%d Last digit of and is greater than %d\n", n);
	}
	else if (n == 5)
	{
		printf("%d Last digit of and is %d\n", n);
	}
	else
	{
		printf("%d Last digit of and is less than 6 and not %d\n", n);
	}

	return (0);

}
