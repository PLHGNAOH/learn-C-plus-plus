#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter n ");
	scanf_s("%d", &n);
	long m = 0;
	long s = 0;
	do
	{
		m = m + 1;
		s = s + m;
		
	} while (s + m + 1 < n);
	printf("\nso nguyen duong k lon nhat la %ld ", m);
	_getch();
	return 0;
}