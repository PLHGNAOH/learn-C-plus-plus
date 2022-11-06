#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n;
	printf("\nNhap mot so bat ki co gioi han nam tu 1 toi 9: ");
	scanf_s("%d", &n);
	int sochuso = log10((double)n) + 1;
	printf("\nSo duoc nhap co so chu so la:%d ", sochuso);
	printf(" ==> va duoc doc la: ");
	if (sochuso > 9)
	{
		printf("\nKhong doc");
	}
	else
		//sochuso la 9
		if (sochuso == 9)
		{
			int temp = n / 100000000;
			if (temp == 1)
			{
				printf(" Mot tram trieu ");
			}
			if (temp == 2)
			{
				printf(" Hai tram trieu");
			}
			if (temp == 3)
			{
				printf(" Ba tram trieu");
			}
			if (temp == 4)
			{
				printf(" Bon tram trieu");
			}
			if (temp == 5)
			{
				printf(" Nam tram trieu ");
			}
			if (temp == 6)
			{
				printf(" Sau tram trieu");
			}
			if (temp == 7)
			{
				printf(" Bay tram trieu");
			}
			if (temp == 8)
			{
				printf(" Tam tram trieu");
			}
			if (temp == 9)
			{
				printf(" Chin tram trieu");
			}
			sochuso--;
			n %= 100000000;
		}


		//sochuso la 8
		if (sochuso == 8)
		{
			int temp = n / 10000000;
			if (temp == 1)
			{
				printf(" Muoi trieu ");
			}
			if (temp == 2)
			{
				printf(" Hai muoi trieu");
			}
			if (temp == 3)
			{
				printf(" Ba muoi trieu");
			}
			if (temp == 4)
			{
				printf(" Bon muoi trieu");
			}
			if (temp == 5)
			{
				printf(" Nam muoi trieu");
			}
			if (temp == 6)
			{
				printf(" Sau muoi trieu");
			}
			if (temp == 7)
			{
				printf(" Bay muoi trieu");
			}
			if (temp == 8)
			{
				printf(" Tam muoi trieu");
			}
			if (temp == 9)
			{
				printf(" Chin muoi trieu");
			}
			sochuso--;
			n %= 10000000;
		}

		//sochuso la 7
		if (sochuso == 7 )
		{
			int temp = n / 1000000;
			if (temp == 1)
			{
				printf(" Mot trieu ");
			}
			if (temp == 2)
			{
				printf(" Hai trieu ");
			}
			if (temp == 3)
			{
				printf(" Ba trieu ");
			}
			if (temp == 4)
			{
				printf(" Bon trieu ");
			}
			if (temp == 5)
			{
				printf(" Nam trieu ");
			}
			if (temp == 6)
			{
				printf(" Sau trieu ");
			}
			if (temp == 7)
			{
				printf(" Bay trieu ");
			}
			if (temp == 8)
			{
				printf(" Tam trieu ");
			}
			if (temp == 9)
			{
				printf(" Chin trieu ");
			}
			sochuso--;
			n %= 1000000;
		}

	{  // sochuso la 6
		if (sochuso == 6)
		{
			int temp = n / 100000;
			if (temp == 1)
			{
				printf(" Mot tram ngan");
			}
			if (temp == 2)
			{
				printf(" Hai tram ngan");
			}
			if (temp == 3)
			{
				printf(" Ba tram ngan");
			}
			if (temp == 4)
			{
				printf(" Bon tram ngan");
			}
			if (temp == 5)
			{
				printf(" Nam tram ngan");
			}
			if (temp == 6)
			{
				printf(" Sau tram ngan");
			}
			if (temp == 7)
			{
				printf(" Bay tram ngan");
			}
			if (temp == 8)
			{
				printf(" Tam tram ngan");
			}
			if (temp == 9)
			{
				printf(" Chin tram ngan");
			}
			sochuso--;
			n %= 100000;
		}
		//sochuso la 5
		if (sochuso == 5)
		{
			int temp = n / 10000;
			if (temp == 1)
			{
				printf(" Muoi ngan ");
			}
			if (temp == 2)
			{
				printf(" Hai muoi ngan");
			}
			if (temp == 3)
			{
				printf(" Ba muoi ngan");
			}
			if (temp == 4)
			{
				printf(" Bon muoi ngan");
			}
			if (temp == 5)
			{
				printf(" Nam muoi ngan");
			}
			if (temp == 6)
			{
				printf(" Sau muoi ngan");
			}
			if (temp == 7)
			{
				printf(" Bay muoi ngan");
			}
			if (temp == 8)
			{
				printf(" Tam muoi ngan");
			}
			if (temp == 9)
			{
				printf(" Chin muoi ngan");
			}
			sochuso--;
			n %= 10000;

		}

		//sochuso la 4
		if (sochuso == 4)
		{
			int temp = n / 1000;
			if (temp == 1)
			{
				printf(" Mot ngan");
			}
			if (temp == 2)
			{
				printf(" Hai ngan");
			}
			if (temp == 3)
			{
				printf(" Ba ngan");
			}
			if (temp == 4)
			{
				printf(" Bon ngan");
			}
			if (temp == 5)
			{
				printf(" Nam ngan");
			}
			if (temp == 6)
			{
				printf(" Sau ngan");
			}
			if (temp == 7)
			{
				printf(" Bay ngan");
			}
			if (temp == 8)
			{
				printf(" Tam ngan");
			}
			if (temp == 9)
			{
				printf(" Chin ngan");
			}
			sochuso--;
			n %= 1000;

		}

		//sochuso la 3
		if (sochuso == 3)
		{
			int temp = n / 100;
			if (temp == 1)
			{
				printf(" Mot tram ");
			}
			if (temp == 2)
			{
				printf(" Hai tram ");
			}
			if (temp == 3)
			{
				printf(" Ba tram ");
			}
			if (temp == 4)
			{
				printf(" Bon tram ");
			}
			if (temp == 5)
			{  
				printf(" Nam tram ");
			}
			if (temp == 6)
			{
				printf(" Sau tram ngan");
			}
			if (temp == 7)
			{
				printf(" Bay tram ");
			}
			if (temp == 8)
			{
				printf(" Tam tram ");
			}
			if (temp == 9)
			{
				printf(" Chin tram ");
			}
			sochuso--;
			n %= 100;

		}
		//sochuso la 2
		if (sochuso == 2)
		{
			int temp = n / 10;
			if (temp == 1)
			{
				printf(" Muoi");
			}
			if (temp == 2)
			{
				printf(" Hai muoi");
			}
			if (temp == 3)
			{
				printf(" Ba muoi");
			}
			if (temp == 4)
			{
				printf(" Bon muoi");
			}
			if (temp == 5)
			{
				printf(" Nam muoi");
			}
			if (temp == 6)
			{
				printf(" Sau muoi");
			}
			if (temp == 7)
			{
				printf(" Bay muoi");
			}
			if (temp == 8)
			{
				printf(" Tam muoi");
			}
			if (temp == 9)
			{
				printf(" Chin muoi");
			}
			sochuso--;
		}
		//sochuso la 1
		if (sochuso == 1)
		{
			int temp= n % 10;
			if (temp == 1)
			{
				printf(" Mot");
			}
			if (temp == 2)
			{
				printf(" Hai");
			}
			if (temp == 3)
			{ 
				printf(" Ba");
			}
			if (temp == 4)
			{
				printf(" Bon");
			}
			if (temp == 5)
			{
				printf(" Nam");
			}
			if (temp == 6)
			{
				printf(" Sau");
			}
			if (temp == 7)
			{
				printf(" Bay");
			}
			if (temp == 8)
			{
				printf(" Tam");
			}
			if (temp == 9)
			{
				printf(" Chin");
			}
		}

	}

	_getch();
	return 0;
}
