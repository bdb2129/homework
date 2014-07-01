#include <stdio.h>

int main()
{
	int x = 32;

	while (x > 31 && x < 128)
	{
		printf("%d %c\n", x, x);
		x++;
	}
	return 0;
}
