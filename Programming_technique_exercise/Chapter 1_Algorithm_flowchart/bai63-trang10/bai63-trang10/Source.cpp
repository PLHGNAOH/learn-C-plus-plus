#include<stdio.h>
#include<conio.h>
void enter(int &n)
{
	printf("enter n ");
	scanf_s("%d", &n);

}
int main()
{
	int a, b,temp,kq;
	enter(a);
	enter(b);
	if (a > b)
		temp = a;
	else
		temp = b;
	for (int i = temp; i <= a * b; i += temp)
	{
		if (i % a == 0 && i % b == 0)
		{
			kq = i;
			break;
		}
	}
	printf("\nBCNN cua hai so a va b la %d ", kq);
	_getch();
	return 0;
}