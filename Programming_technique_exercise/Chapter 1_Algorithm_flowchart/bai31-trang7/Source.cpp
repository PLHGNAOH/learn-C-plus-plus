#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter n ");
	scanf_s("%d", &n);
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		printf("\%d Is a prime number  ", n);
		
	}
	else
	{
		printf("\n %d isn't a prime number ", n);
	}
	_getch();
	return 0;
}