#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter n ");
	scanf_s("%d", &n);
	int check = 1;
	printf("\nSo %d co toan chu so chan hay khong ",n);
	while (n /= 10)
	{
		if ((n % 10) % 2 == 1)
		{
			check = 0;
			break;
		}
	}
	if (check == 1)
	{
		printf("\nCo");
	}
	else
		printf("\nKhong");
	_getch();
	return 0;
}