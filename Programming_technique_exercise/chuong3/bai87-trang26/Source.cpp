#include<stdio.h>
#include<conio.h>
int main()
{
	int S = 0;
	int n = 0;
	while (S <= 10000)
	{
		n++;
		S = S + n;
	}
	printf("So N la: %d", n);
	_getch();
	return 0;
}