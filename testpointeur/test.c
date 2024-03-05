#include <stdio.h>

int main()
{
int tableau[5] = {1, 2, 3, 4, 5};

int x = tableau[0];

tableau[1] = 10;
for (int i = 0; i < 5; i++)
{
    printf("%d ", tableau[i]);
}
for (int i = 0; i < 5; i++)
{
    printf("%d ", tableau[i]);
}
return (0);
}

