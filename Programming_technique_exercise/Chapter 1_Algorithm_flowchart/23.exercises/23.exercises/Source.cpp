#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int count = 0;
	printf("\nEnter a posible integer n ");
	scanf_s("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count = count + i;
			printf("\n list of all anquote a posible integer n %4d",i);
		}
	}
	printf("\nCount= %d ", count);

	_getch();
	return 0;		
}