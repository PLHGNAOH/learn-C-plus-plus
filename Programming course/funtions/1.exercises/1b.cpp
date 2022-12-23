#include<stdio.h>
#include<conio.h>
void enter(double &n)
{
	prtinf("\nenter n ");
	scanf_s("%f",&n);
}
double gptb1(double a , double b)
{
	if (a==0)
	{
		if(b==0)
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
		double x=-b/a;
		printf("\nresult is %f",x);
	
	}
}
int main()
{
	double a,b;
	enter(a);
	enter(b);
	gptb1(a,b);
	_getch();
	return 0;
}