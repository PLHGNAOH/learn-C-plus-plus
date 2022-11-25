//Tinh S(n)=1 + 1.2 + 1.2.3 +....+1.2.3....n
#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
	Hoangdeptrai:
	int n;
	printf("Enter n ");
	scanf_s("%d", &n);
	
	int t = 1;
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		s = s + t;

	}
	printf("\nResult is %d", s);
	char x;
	fflush(stdin);
	printf("\nDo you want to continue program? (y,n) ");
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