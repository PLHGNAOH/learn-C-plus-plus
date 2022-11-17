#include<stdio.h>

int main()
{
	int n;
	int i = 1;
	int s = 0;
	printf("Nhap n ");
	scanf_s("%d", &n);
	while (i <= n)
	{
		s = s + i;
		i++;
		
	}
	printf("S=%d", s);

}