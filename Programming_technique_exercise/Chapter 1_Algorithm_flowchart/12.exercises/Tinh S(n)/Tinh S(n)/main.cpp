//Tinh S(n)=x + x^2 +x^3+...+x^n
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
int main()
{
	Hoangdeptrai:
	int n,x;
	printf("Enter n ");
	scanf_s("%d", &n);
	printf("\nEnter x ");
	scanf_s("%d", &x);
	int result;
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		result = pow(x, i);
		s = s + result;

	}
	printf("Result is %d", s);
	char z;
	fflush(stdin);
	printf("\nDo you want to continue program? (y,n)");
	scanf_s("%c", &z);
	z = _getch();
	if (z == 'y' || z == 'Y');
	{
		system("cls");
		goto Hoangdeptrai;
	}
     
	_getch();
	return 0;
}