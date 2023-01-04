#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter n ");
	scanf_s("%d", &n);
	int max = 1;
	for (int i = 1; i <= n; i++)
	{
		if ((n % i == 0) && (i % 2 == 1))
		{
			if (i > max)
			{
				max = i;
			}
		}
	}
	printf("Uoc so le lon nhat cua so nguyen duong n la %d ", max);
	_getch();
	return 0;
}