#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a positive integer N ");
	scanf_s("%d", &n);
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("\nList of a positve integer n %4d ",i);
			s = s + i;
		}
	}
	printf("\nS=%d", s);



	_getch();
	return 0;
}