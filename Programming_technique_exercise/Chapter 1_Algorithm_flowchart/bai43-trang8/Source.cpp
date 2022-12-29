#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter n ");
	scanf_s("%d", &n);
	int count = 0;
	int t = n;
	while (t != 0)
	{
		count = count + 1;
		t /= 10;
	}
	printf("\nso luong chu so cua so nguyen duong n la %d ", count);
	_getch();
	return 0;
}