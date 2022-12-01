//Tinh S(n)=1/2 + 3/4 + 5/6 +...+2n+1/2n+2
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i;
	float s;
	printf("\nNhap n ");
	scanf_s("%d", &n);
	s = 0;
	i = 1;
	while (	 i <= 2 * n + 1)
	{
		s = s + (float)i / (i + 1);
		i = i + 2;
	}
	printf("\nS=%.2f", s);

	_getch();
	return 0;
}