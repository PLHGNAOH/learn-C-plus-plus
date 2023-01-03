#include<stdio.h>
#include<conio.h>
#include<math.h>
void enter(int& n)
{
	printf("enter n ");
	scanf_s("%d", &n);
}
int main()
{
	int a, b, c;

	enter(a);
	enter(b);
	enter(c);
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				printf("\nPTVSN");
			}
			else
				printf("\nPTVN");
		}
		if(b!=0)
		{
			float x = -c / b;
			printf("\nPhuong trinh co nghiem la %f ", x);
		}
	}
	if(a!=0)
	{
		float delta = (b * b) - (4 * a * c);
		if (delta > 0)
		{
			float x1 =  ( - b - sqrt(delta)) / (2 * a);
			float x2 =  ( - b + sqrt(delta)) / (2 * a);
			printf("\nPhuong trinh co hai nghiem la %f,%f ", x1, x2);
		
		}
		if (delta == 0)
		{
			float x = ( - b / (2 * a));
			printf("\nPhuong trinh co nghiem kep la %f ", x);
		
		}
		if(delta<0)
		{
			printf("\nPTVN");
		}
	}
	_getch();
	return 0;

}