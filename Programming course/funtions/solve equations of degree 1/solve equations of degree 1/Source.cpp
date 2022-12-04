#include<stdio.h>
#include<conio.h>
void Nhap(double& x)
{
	printf("\nenter a value ");
	scanf_s("%lf", &x);
}
void  GPTB1(double a, double b)
{
	if (a == 0)
	{
		if (b == 0)
		{
			printf("\nptvsn");
		}
		else
		{
			printf("\nptvn");
		}
	}
	else
	{
		double x = -b / a;
		printf("\nResult is %lf ", x);
	}
}
int main()
{
	double a, b;
	Nhap(a);
	Nhap(b);
	GPTB1(a, b);
	_getch();
	return 0;
}