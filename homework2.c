#include <stdio.h>

int main()
{
	int x, y;

	printf("Enter two integers that are divisible. (X, X)\n");
	scanf(" %d, %d", &x, &y);

	x % y == 0 ? printf("Divisible.\n") : printf("Not divisible.\n"); 

	return 0;
}
