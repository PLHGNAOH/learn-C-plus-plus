#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n;
	printf("\nenter n ");
	scanf_s("%d", &n);
	long s=0;
	for (int i = 1; i <= n; i++)
	{
		s = s + pow(i, 3);
	}
	printf("\nSum=%ld", s);
	_getch();
	return 0;
}