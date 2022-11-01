#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a, b, c ;
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
			float t = -c / b;
			if (t < 0)
			{
				printf("\nPhuong trinh vo nghiem");

			}
			else
			{
				float x1 = sqrt(t);
				float x2 = -x1;
				printf("\nPhuong trinh co nghiem\nx1=%.2f\nx2=%.2f",x1,x2);
			}

		}
	}
	else
	{
	float	denta = (b * b) - (4 * a * c);
		if (denta > 0)
		{
			float	t1= (-b - sqrt(denta)) / (2 * a);
		    float 	t2 = (-b + sqrt(denta)) / (2 * a);
			if (t1 < 0 && t2 < 0)
			{
				printf("\nPhuong trinh vo nghiem");
			}
			 if(t1 >= 0)
			{
				float x1 = sqrt(t1);
				float x2 = -x1;
				printf("\nPhuong trinh co nghiem =\nx1=%f\nx2=%f", x1, x2);
			}
			 if (t2 >= 0)
			 {
				 float x1 = sqrt(t2);
				 float x2 = -x1;
				 printf("\nPhuong trinh co nghiem=\nx1=%f\nx2=%f", x1, x2);
			 }
		}
		if (denta == 0)
		{
			float t = -b / (2 * a);

			if (t >= 0)
			{
				float x1 = sqrt(t);
				float x2 = -x1;
				printf("\nPhuong trinh co nghiem=\nx1=%f\nx2=%f", x1, x2);
			}
			else
			{
				printf("\nPhuong trinh vo nghiem :))");
			}

		}

	}

	_getch();
	return 0;
}