#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
nn = rand() - RAND_MAX /2;

printf("The number is: %d\n", n);

if (n > 0)
{
	printf("%d is positive\n",n);
}
else if (n == 0)
{
	printf("%d is zero\n",n);
}
else
{
	printf("%d is negative\n",n);
}

return (0);
}
