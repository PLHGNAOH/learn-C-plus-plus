//Tinh S(n)=x^2 + X^4 + ...+ x^n
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
int main()
{
	Hoangdeptrai:
	int n;
	printf("Enter n ");
	scanf_s("%d", &n);
	int x,s;
	int result = 0;
	printf("\nEnter x ");
	scanf_s("%d", &x);
	for (int i = 1; i <= n; i++)
	{
		s = pow(x, 2*i);
		result = result + s;
	}
	printf("\nResult is %d", result);
	char h;
	fflush(stdin);
	printf("\nDo you want to continue program? (y,n) ");
	scanf_s("%c", &h);
	h = _getch();
	if (h == 'y' || h == 'Y');
	{
		system("cls");
		goto Hoangdeptrai;

	}
	_getch();	
	return 0;


  }