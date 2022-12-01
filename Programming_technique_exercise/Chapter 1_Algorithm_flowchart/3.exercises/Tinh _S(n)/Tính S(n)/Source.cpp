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
	while (i <= n)
	{

		s = s + 1.0 / i;
		i++;
	}
	printf("\nS=%.2f ", s);

	_getch();
	return 0;
}