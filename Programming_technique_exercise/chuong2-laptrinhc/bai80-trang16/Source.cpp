#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n;
	float x, S, T;
	long M;
	printf("\nenter n ");
	scanf_s("%d", &n);
	printf("\nenter x ");
	scanf_s("%f", &x);
	S = 0;
	M = 0;
	for (int i = 1; i <= n; i++)
	{
		M = M + i;
		T = pow(x, i);
		S = S + T / M;
	}
	printf("\nSum=%f", S);
	_getch();
	return 0;

}