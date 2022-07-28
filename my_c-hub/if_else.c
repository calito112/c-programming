#include <stdio.h>
#include <stdlib.h>

int main()
{
	int getLowestNumber(int n1, int n2, int n3) {
	int lowestNumber;

	if (n1 <= n2 && n1 <= n3) {
	lowestNumber = n1;
	}
	else if (n2 <= n1 && n2 <= n3) {
	lowestNumber = n2;
	}
	else {
	lowestNumber = n3;
	}
	return lowestNumber;
	}
	printf("The lowest number is %d\n", getLowestNumber(20, 30, 40));
	return 0;
}
