#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int x = 1;x <= 10;x++)
		printf("%d ", square(x));
	printf("\n");
	system("pause");
	return 0;
}

int square(int y)
{
	return y * y;
}