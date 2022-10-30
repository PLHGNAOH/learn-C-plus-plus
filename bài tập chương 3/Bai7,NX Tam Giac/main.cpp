#include<stdio.h>
#include<conio.h>
 int main()
{
	 float a, b, c;
	 printf("\nNhap canh a: ");
	 scanf_s("%f", &a);

	 printf("\nNhap canh b: ");
	 scanf_s("%f", &b);

	 printf("\nNhap canh c: ");
	 scanf_s("%f", &c);

	 if (a + b <= c || a + c <= b || c + b <= a)
	 {
		 printf("\nKhong co tam giac nao thoa man");
		 _getch();
		 return 0;
	 }
	 else if (a  == b && a  == c)
	 {
		 printf("\nTam giac deu");
		 _getch();
		 return 0;
	  }
	 else if (a == b || a == c|| b==c)
	 {
		 if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
		 {
			 printf("\nTam giac vuong can");
			 _getch();
			 return 0;
		}
		 else
		 {
			 printf("\nTam giac can");
			 _getch();
			 return 0;
		 }
	 }
    else if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
	 {
		 printf("\nTam giac vuong");
		 _getch();
		 return 0;
	 }

	else
	 {
		 printf("\nTam giac thuong");
		 
	 }

	 _getch();
	 return 0;

 }