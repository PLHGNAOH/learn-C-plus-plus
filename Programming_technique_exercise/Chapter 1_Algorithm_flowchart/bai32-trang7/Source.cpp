#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter n ");
	scanf_s("%d", &n);
	int i = sqrt(n);
	if (i*i==n)
	{
		printf("\nLa so chinh phuong");
	}
	else
	{
		printf("\nKhong la so chinh phuong");
	}
	_getch();
	return 0;

}