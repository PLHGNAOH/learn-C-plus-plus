//Tinh T(x,y)=x^y
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
int main()
{
Hoangdeptrai:
	int x, y;
	printf("Enter coefficient x ");
	scanf_s("%d", &x);
	printf("Enter the exponent y ");
	scanf_s("%d", &y);
	int result;
	result = pow(x, y);
	printf("Result is %d", result);
	char z;
	fflush(stdin);
	printf("\nDo you want to continue program? ==> choose (y,n)");
	scanf_s("%c", &z);
	z = _getch();
	if (z == 'y' || z == 'Y')
	{
		system("cls");
		goto Hoangdeptrai;

	}



	_getch();
	return 0;
}