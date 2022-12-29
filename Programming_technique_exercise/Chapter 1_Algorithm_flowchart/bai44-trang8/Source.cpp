#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter n ");
	scanf_s("%d", &n);
	int sum = 0;
	int t = n;
	int sotachra;

	while (t != 0)
	{
		sotachra = t % 10;
		sum = sum + sotachra;
		t /= 10;
	}
	printf("\nSum=%d", sum);
	_getch();
	return 0;
}