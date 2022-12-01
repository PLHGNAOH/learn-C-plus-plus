#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a positive integer n ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)	
		{
			printf("%4d", i);
		}

	}




	_getch();
	return 0;
}