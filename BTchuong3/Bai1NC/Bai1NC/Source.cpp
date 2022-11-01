#include<stdio.h>
#include<conio.h>
int main()
{
	float a, b, c, d, e, f;
	printf("\nNhap a ");
	scanf_s("%f",&a);

	printf("\nNhap b ");
	scanf_s("%f", &b);

	printf("\nNhap c ");
	scanf_s("%f", &c);

	printf("\nNhap d ");
	scanf_s("%f", &d);

	printf("\nNhap e ");
	scanf_s("%f", &e);

	printf("\nNhap f ");
	scanf_s("%f", &f);
	printf("\nNghiem Cua He Phuong Trinh La :");
	 
	float x, y;
	
	y = (f * a - d * c) / (e * a - d * b);
	x = (c - b * y) / a;	

		if (a == 0)
		{
			printf("\nPTVN");
		}
		else
		{
			printf("\nx=%.2f", x);
		}

		if (e * a - d * b != 0)
		{
			printf("\ny=%.2f", y);
	
		}	
	
	        else
	    {
		printf("PTVN");
	                }


	_getch();
	return 0;
 }