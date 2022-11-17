#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	do {
		printf("\nNhap so tu nhien ");
		scanf_s("\n%d", &n);


	} while (n % 2 != 0);


	_getch();
	return 0;
}
