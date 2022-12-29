#include<stdio.h>
#include<conio.h>
int main()
{
	int N,m, S;
	printf("\nEnter N: ");
	scanf_s("%d", &N);
	S = 0;
			 m = 0;
	do

	{
		m = m + 1;
		S = S + m;
	} while (S + m+ 1 < N);
	
	printf("\nSo nguyen duong m la %d",	m);
	_getch();
	return 0;

}