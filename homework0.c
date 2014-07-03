#include <stdio.h>

int main()
{
	int x = 32, t;

	while (x > 31 && x < 128)
	{
		printf("%d %c\t|", x, x);
		x++;
	}

	return 0;
}
