//Tính S(n)=1*2*3*...n
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i;
	long t;
	printf("\nNhap n ");
	scanf_s("%d", &n);
	t = 1;
	i = 1;
	while (i <= n)
	{
		t = t * i;
		i++;
	}
	printf("\nT=%ld", t);


	_getch();
	return 0;
}