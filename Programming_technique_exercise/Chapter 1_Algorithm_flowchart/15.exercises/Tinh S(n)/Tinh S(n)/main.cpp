//Tinh S(n)=1 + 1/1+2 + 1/1+2+3 + ... + 1/1+2+3+...+n
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter n ");
	scanf_s("%d", &n);
	float result = 0;
	float s;
	int m = 0;
	int x = 3;
	for (int i = 1; i <= n; i++)
	{

		m = m + i;
		result = result + (1.0 / m);

	}
	printf("\nResult is %.2f ", result);

	_getch();
	return 0;
}
