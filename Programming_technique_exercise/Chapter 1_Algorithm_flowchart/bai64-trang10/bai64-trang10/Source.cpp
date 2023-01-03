#include<stdio.h>
#include<conio.h>
void enter(int& n)
{
	printf("enter n ");
	scanf_s("%d", &n);
}
int main()
{
	int a, b,x;
	enter(a);
	enter(b);
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
		x = -b / a;
		printf("\nPhuong trinh co nghiem la %d ", x);
	}
	_getch();
	return 0;

}