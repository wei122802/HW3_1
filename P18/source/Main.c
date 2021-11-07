#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	char string1[ ] ="Welcome";
	char string2[60];
	strcpy_s(string2,sizeof(string1),string1);
	printf("string2=%s\n¦r¦êªø«×¬°%d\n",string2, strlen(string2));

	system("pause");
	return 0;
}