#include<stdio.h>
#include<conio.h>
void enter(float& n)
{
	printf("\nenter n ");
	scanf_s("%f", &n);
}
int main()
{
	float a, b;
	clearerr_s;
	enter(a);
	enter(b);
	if (a * b>0)
	{
		printf("%10.3f va %10.3f cung dau ", a, b);
	}
	else
	{
		printf("%10.3f va %10.3f trai dau ", a, b);
	}
	_getch();
	return 0;
}