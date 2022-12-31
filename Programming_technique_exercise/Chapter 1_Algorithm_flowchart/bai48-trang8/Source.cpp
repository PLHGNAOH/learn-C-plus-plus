#include<stdio.h>
#include<conio.h>
int main()
{
	int n,tachso;
	printf("enter n ");
	scanf_s("%d", &n);
	int t = n;
	int tich=1;
	while (t != 0)
	{
		tachso = t % 10;
		if (tachso % 2 == 1)
		{
			tich = tich * tachso;
		}
		t /= 10;
	}
	printf("\nTich=%d", tich);
	_getch();
	return 0;

}