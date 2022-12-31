#include<stdio.h>
#include<conio.h>
int main()
{
	int n,tachso;
	printf("enter n ");
	scanf_s("%d", &n);
	int s = 0;
	int t = n;
	while (t != 0)
	{
		tachso = t % 10;
		if (tachso % 2 == 0)
		{
			s = s + tachso;
		}
		t /= 10;
	}
	printf("\nSum=%d", s);
	_getch();
	return 0;
}