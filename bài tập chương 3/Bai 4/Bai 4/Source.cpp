#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a, b, c, x;
	printf("\nNhap a=");
	scanf_s("%f", &a);

	printf("\nNhap b=");
	scanf_s("%f", &b);

	printf("\nNhap c=");
	scanf_s("%f", &c);
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				printf("\nPhuong trinh vo so nghiem");
			}
			else
			{
				printf("\nPhuong trinh vo ngiem");
			}
		}
	
		    else

		{
			x = -c / b;
			printf("\nPhuong trinh co nghiem x=%.2f", x);
		}
	}
	else
	{
		float denta, x1, x2;
		denta = (b * b)- (4 * a * c);
		if (denta > 0)
		{
			x1 = (-b - sqrt(denta)) / (2 * a);
			x2 = (-b + sqrt(denta)) / (2 * a);
			printf("\nPhuong trinh co hai nghiem\nx1=%.2f\nx2=%.2f", x1, x2);
		}
		else if (denta == 0)
		{
			x1 = x2 = -b / (2 * a);
			printf("\nPhuong trinh co nghiem kep x1=x2=%.2f", x1);
		}
		else
		{
			printf("\nPhuong trinh vo nghiem :(((");
		}

	}
		
	_getch();
	return 0;
 }