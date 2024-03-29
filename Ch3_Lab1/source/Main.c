#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);

int main(void)
{
	int n, Sum;
	char AddChoice;
	printf("1+2+...+n=?請輸入n=");
	scanf_s("%d", &n);
	printf("請問要做奇數和(O),偶數和(E)，還是整數和(I)?請選擇:");
	scanf_s(" %c", &AddChoice);

	switch (AddChoice)
	{
	case 'O':
		Sum = Odd(n);
		break;
	case 'E':
		Sum = Even(n);
		break;
	case 'I':
		Sum = TotalSum(n);
		break;
	default:
		printf("選擇錯誤\n");
		return -1;
	}
	printf("總合為%d\n", Sum);
	system("pause");
	return 0;
}

int Odd(int U)
{
	int total = 0;
	for (int i = 1; i <= U; i++)
	{
		if (i % 2 == 1)
			total = total + i;
	}
	return total;
}
int Even(int U)
{
	int total = 0;
	for (int i = 1; i <= U; i++)
	{
		if (i % 2 == 0)
			total = total + i;
	}
	return total;
}
int TotalSum(int U)
{
	return Odd(U) + Even(U);
}