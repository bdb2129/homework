#include <stdio.h>
#include <math.h>

int main()
{
	int x, r[5];
	int i = 0;
	int z = r[4] + r[3] + r[2] + r[1] + r[0];

	printf("Enter an integer. The system ");
	printf("will find its octal equivalent.\n");
	scanf(" %d", &x);

	while (x > 8);
	{
		x = x/8;
		r[i] = x % 8;
		i++;
	}
	if (x <= 8)
	{
		printf("The octal equivalent is %d.\n", z);
	}
	return 0;
}
