#include<stdio.h>
#include<conio.h>
void enter(int& n)
{
	printf("enter n ");
	scanf_s("%d", &n);
	
}
int main()
{
	int a, b;
	enter(a);
	enter(b);
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	printf("\nUCLN cua hai so a va b  la %d", a);
	_getch();
	return 0;
}