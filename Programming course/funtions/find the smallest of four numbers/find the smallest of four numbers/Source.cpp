#include<stdio.h>
#include<conio.h>
void nhap(int & n)
{
	printf("\nEnter n ");
	scanf_s("%d", &n);
}
int TimMin(int a, int b, int c, int d)
{
	int min = a;
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
		;
	}
	if (d < min)
	{
		min = d;
	}
	return min;
}
int main()
{
	int a, b, c, d;
	nhap(a);
	nhap(b);
	nhap(c);
	nhap(d);
	int min = TimMin(a, b, c, d);
	printf("\nMin =%d",min);

	_getch();
	return 0;

}

	