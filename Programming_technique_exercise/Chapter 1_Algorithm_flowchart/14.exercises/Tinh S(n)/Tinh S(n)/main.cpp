//Tinh S(n)=x+x^3+x^5+...+x^2n+1
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
int main()
{
Hoangdeptrai:
	int n,x,s;
	printf("Enter n ");
	scanf_s("%d", &n);
	printf("\nEnter x ");
	scanf_s("%d", &x);
	int result = 0;
	for (int i = 0; i <= n; i++)
	{
		s = pow(x, 2.0 * i + 1.0);
		result = result + s;

	}
	printf("\nResult is %d ", result);




	_getch();
	return 0;
}