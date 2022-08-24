#include <stdio.h>
#include <stdlib.h>

int main (void)
{
// A function thats gets the lowest number of three numbers
int getLowest(int i, int j, int k)
{
printf("Enter the first number : "); // prompts user to enter 1st number.
scanf("%d", &i);

printf("Enter the second number : "); // prompts user to enter 2nd number.
scanf("%d", &j);

printf("Enter the third number : "); // prompts user to enter 3rd number.
scanf("%d", &k);

int result;

if (i <= j && i <= k)
{
result = i;
}
else if (j <= i && j <= k)
{
result = j;
}
else
{
result = k;
}
}
printf("The lowest number is %d", getLowest(0, 0, 0));
}

