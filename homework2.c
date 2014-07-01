#include <stdio.h>

int main()
{
	int x, y;

	printf("Enter two integers that are divisible.\n");
	scanf(" %d, %d", &x, &y);

	if (x % y == 0)
	{
		printf("These integers are divisible.\n");
	}
	else
	{
		printf("These integers are not divisible.\n");
	}
}
