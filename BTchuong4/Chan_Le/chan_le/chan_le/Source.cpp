#include<stdio.h>
#include<conio.h>
#include<Windows.h>
int main()
{
Hoangdeptrai:
	int numbers;
	printf("\nNhap so tu nhien ");
	scanf_s("%d", &numbers);
	do {
		printf("\nNhap so tu nhien ");
		scanf_s("\n%d", &numbers);
		if (numbers % 2 != 0)
		{
			printf("\nNhap lai ");
		}

	} while (numbers % 2 != 0);



	 char x;
	 fflush(stdin);
	 printf("\nBan co muon tiep tuc chuong khong ==> Neu co hay chon(y,n)");
	 scanf_s("\n%c", &x);
	 x = getch();
	 if (x == 'y' || x == 'Y')
	 {
		 system("cls");
		 goto Hoangdeptrai;

	 }
	getch();
	return 0;
 }