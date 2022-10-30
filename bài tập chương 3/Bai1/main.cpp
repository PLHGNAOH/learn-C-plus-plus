#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	printf("\nNhap a: ");
	scanf_s("%d",&a);

	printf("\nNhap b:");
	scanf_s("%d",&b);
	int Min, Max;
	if (a == b)
	{

		printf("\nMin=Max=%d ", Min);
	}
	
	else if (a > b)
	{
		Max = a;
		Min = b;

	}
	else
	{
		Max = b;
		Min = a;
		
	}


	printf("\Min=%d & Max= %d", Min, Max);

	_getch();
	return 0;
  }