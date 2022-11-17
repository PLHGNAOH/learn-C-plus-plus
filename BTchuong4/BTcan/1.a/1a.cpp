#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	Hoangdeptrai:
	int n ;
	long s;
	printf("\nNhap n: ");
	scanf_s("%d", &n);
	s = 0;

	for(int i=1;i<=n;i++)
	{
		s = s + i;
	}
	printf("\nTong=%ld", s);
	char x;
	fflush(stdin);
	printf("\nBan co muon tiep tuc nua khong ==> chon (y,n)");
	scanf_s("%c", &x);
	x = _getch();
	if (x == 'y' || x == 'Y')
	{
		system("cls");
		goto Hoangdeptrai;

	}

	_getch();
	return 0;
}