#include<stdio.h>
#include<conio.h>
#include<math.h>
void enter(int& n)
{
	do
	{
		printf("\nenter a posible interger n ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("\nplease re-enter ");
		}
	} while (n < 0);
}
int checksquarenumber(int n)
{
	int i = sqrt(n);
	if (i * i == n)
	{
		printf("\n%d is square number ",n);
	}
	else if (i * i != 0)
	{
		printf("\n%d isn't  square number ", n);
	}
	return n;
}
int main()
{
	int a;
	enter(a);
	checksquarenumber(a);
	_getch();
	return 0;
}