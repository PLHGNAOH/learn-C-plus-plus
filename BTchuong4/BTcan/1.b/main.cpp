#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("\nNhap n ");
	scanf_s("%d", &n);
	int i = 1;
	int s = 0;
	while (i <= n)
	{
		int s = s + i * i;
		i++;
	}
	printf("\nS=%d ", s);


	_getch();
	return 0;
}