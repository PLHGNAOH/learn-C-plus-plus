#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter n ");
	scanf_s("%d", &n);
	int check = n;
	int tachso;
	int daoso=0;
	while (n !=0)
	{
		tachso = n % 10;
		daoso = daoso * 10 + tachso;
		n /= 10;
	}
	if (check == daoso)
		printf("\nSo %d la so doi xung ", daoso);
	else
		printf("\nSo %d khong la so doi xung ");
	_getch();
	return 0;

	

}