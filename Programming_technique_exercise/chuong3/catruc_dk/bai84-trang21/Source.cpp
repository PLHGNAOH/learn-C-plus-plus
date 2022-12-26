#include<stdio.h>
#include<conio.h>
void enter(float &n)
{
	printf("enter n ");
	scanf_s("%f", &n);

}
int main()
{
	float  a, b;
	enter(a);
	enter(b);

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
		float x = -b / a;
		printf("\nx=%f", x);
	}
	_getch();
	return 0;

}