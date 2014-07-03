#include <stdio.h>
#include <math.h>

int main()
{
	int x;

	printf("Enter an integer. The system ");
	printf("will find its octal equivalent.\n");
	
	scanf(" %d", &x);
	printf("%o\n", x);

	return 0;
}
