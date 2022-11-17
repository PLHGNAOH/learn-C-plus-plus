#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i;
	long s;
	printf("\nNhap n ");
	scanf_s("%d", &n);
	s = 0;
	i = 1;
	while (i <= n)
	{

		s = s + i * i;
		i++;

	}
	printf("\nS=%d ", s);

	_getch();
	return 0;
}