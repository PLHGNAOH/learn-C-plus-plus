#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter n ");
	scanf_s("%d", &n);
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			s += i;
		}
	}
	printf("\nTong cac uoc so nho hon chinh no la %d ", s);
	_getch();
	return 0;
}