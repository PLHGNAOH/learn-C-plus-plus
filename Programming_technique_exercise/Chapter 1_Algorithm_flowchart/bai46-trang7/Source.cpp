#include<stdio.h>
#include<conio.h>
int main()
{
	long n;
	printf("enter n ");
	scanf_s("%d", &n);
	long tachso = 0;
	int count = 0;
	long t = n;
	while (t != 0)
	{

		tachso = t % 10;
		if (tachso % 2 == 1)
		{
			count++;
		}
		t /= 10;
	}
	printf("\nso luong chu so le cua so nguyen duong n la %d", count);

	_getch();
	return 0;
}