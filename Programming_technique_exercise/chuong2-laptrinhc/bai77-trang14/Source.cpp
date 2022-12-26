#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("\nenter n ");
	scanf_s("%d", &n);
	long s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + i;

	}
	printf("\nSum =%ld", s);
	_getch();
	return 0;

}