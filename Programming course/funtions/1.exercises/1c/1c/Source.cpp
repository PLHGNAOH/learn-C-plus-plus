#include<stdio.h>
#include<conio.h>
#include<math.h>

void Nhap(double & n)
{
	printf("\nEnter n ");
	scanf_s("%lf", &n);

}
void GPTB1(double a, double b)
{
	if (a == 0)
	{
		if (b == 0)
		{
			printf("\nPTVSN");
		}
		else
		{
			printf("\nPTVN");
		}
	}
	else
	{
		double x = -b / a;
		printf("\nx=%lf", x);
	}	

}
void GPTB2(double a, double b, double c)
{
	if (a == 0)
	{
		GPTB1(b, c);
	}
	else
	{
		double denta = b * b - 4 * a * c;
		if (denta < 0)
		{
			printf("\nptvn");
		}
		else if (denta == 0)
		{
			double x = -b / (2 * a);
			printf("\nPt co hai nghiem la x1 = x2 = %lf ", x);
		}
		else
		{
			 double x1 = (-b - sqrt(denta)) / (2 * a);
			 double x2 = (-b + sqrt(denta)) / (2 * a);
			 printf("\nPT co hai nghiem phan biet:\nx1=%lf\nx2=%lf ", x1, x2);
		}
	}

}

int main()
{
	double a, b, c;
	Nhap(a);
	Nhap(b);
	Nhap(c);
	GPTB2(a, b, c);


	_getch();
	return 0;
}