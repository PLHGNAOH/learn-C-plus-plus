//Tinh S(n)=x + x^2/2! + x^3/3! +...+x^n/n!
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,x;
	printf("Enter n ");
	scanf_s("%d", &n);
	printf("\nEnter x ");
	scanf_s("%d", &x);
	float s=0;
	int t = 1;
	float result = 0;
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		s =pow(x, i) / t ;
		result = result + s;
	}
	 printf("\nResult is %.2f ",result);
		
	_getch();
    return 0;
}
