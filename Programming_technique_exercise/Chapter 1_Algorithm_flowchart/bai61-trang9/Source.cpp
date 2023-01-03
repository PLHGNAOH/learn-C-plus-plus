#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter n ");
	scanf_s("%d", &n);
	int check = 1;	
	int temp = n;
	int chusocuoi = temp % 10;
	temp /= 10;
	printf("\nChu so %d co giam dan tu trai sang phai hay khong ", n);
	while (temp != 0)
	{
		int chusokecuoi = temp % 10;
		temp /= 10;
		if (chusocuoi > chusokecuoi)
		{
			check = 0;
			break;
		}
		else
		{
			chusocuoi = chusokecuoi;
		}
	}
	if (check)
		printf("\nCo");
	else
		printf("\nKhong");
	_getch();
	return 0;

}