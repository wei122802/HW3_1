#include <stdio.h>
#include <stdlib.h>

double Power(double, int);

void main(void)
{
	int k; double Ans;
	printf("�p��3.5��K����?�п�JK=");
	scanf_s("%d", &k);
	Ans = Power(3.5, k);
	printf("3.5��%d����=%f\n", k, Ans);
	system("pause");
	return 0;
}
double Power(double X,int n)
{
	double PowerXn = 1;
	for (int i = 1;i <= n;i++)
		PowerXn = PowerXn * X;
	return PowerXn;
}