#include <stdio.h>

int main()
{
int year;

printf("Enter year: "); // creates a prompt
scanf("%d", &year); // stores the inputed value in the year variable

if (year%4 == 0) // condition for leap year.
{
printf("This is a leap year %d", year);
}
else if (year%4 != 0)
{
printf("This is not a leap year. Try Again!");

return 0;
}
}

