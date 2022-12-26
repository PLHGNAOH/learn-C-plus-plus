#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("\nenter n ");
	scanf_s("%d", &n);
	int t = n;
	int count = 0;
	while (t != 0)
	{
		t /= 10;
		count = count + 1;
	}
	printf("\n co so luong chu so la %d", count);
	_getch();
	return 0;
}