#include<stdio.h>
#include<conio.h>
void enter(int& n)
{
	printf("\nenter n ");
	scanf_s("%d", &n);
}
int main()
{
	int a, b;
	enter(a);
	enter(b);
	printf("\nUCLN cua %d va %d la :", a, b);
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
			b = b - a;
	}
	printf("%d", b);
	_getch();
	return 0;
}