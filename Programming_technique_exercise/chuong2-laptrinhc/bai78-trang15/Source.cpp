#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("\nenter n ");
	scanf_s("%d", &n);
	printf("\nDay cac uoc so cua %d la ",n);
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