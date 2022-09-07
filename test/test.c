#include <stdio.h>
#include <stdlib.h>

int main()
{
int user;

printf("Enter a character : "); //creates a prompt
user = getc(stdin); // gets input from the user
printf("The character you entered is : ");
putc(user, stdout);
printf("\n");
return 0;
}
