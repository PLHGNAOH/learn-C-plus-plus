//Tinh S(n)=1+x+x^3/3!+x^5/5!+...+x^2n+1/(2n+1)!
#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
 {
	 int n, x;
	 printf("Enter n ");
	 scanf_s("%d",&n);
	 printf("\nEnter x ");
	 scanf_s("%d", &x);
	 float T, M, S, H;
	 H = 1;
	 S = 1 + x;
		
	
	 for (int i = 1; i <= n; i++)
	 {
		 T = pow(x, 2 * i + 1);
		 M = 2 * i + 1;
		 H = H * M * (M - 1);
		 S = S+ (T / H) ;
		 
		

	 }
	 printf("\nResult is %f",S );
 
 
 
 
	 _getch();
	 return 0;
 }

