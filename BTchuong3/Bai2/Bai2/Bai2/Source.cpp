#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	// nhập số có 2 chữ số, in ra cách đọc

	int n; // số nhập vào
	printf("\nNhap vao n = ");
	scanf_s("%d", &n);

	int Check = 0; // Mặc định là 0

	if (n < 0)
	{
		Check = 1; // Bật thành 1
		n *= -1; // Biến n thành dương
	}

	int sochuso = log10((double)n) + 1;

	// xử lý
	if (sochuso == 2)
	{
		int hangchuc, hangdonvi;

		if (Check == 1)
		{
			printf("\nAm ");
		}

		hangchuc = n / 10;
		hangdonvi = n % 10;

		if (hangchuc == 1)
		{
			printf("\nMuoi ");
		}
		else if (hangchuc == 2)
		{
			printf("\nHai muoi");
		}
		else if (hangchuc == 3)
		{
			printf("\nBa muoi");
		}
		else if (hangchuc == 4)
		{
			printf("\nBon muoi");
		}
		else if (hangchuc == 5)
		{
			printf("\nNam muoi");
		}
		else if (hangchuc == 6)
		{
			printf("\nSau muoi");
		}
		else if (hangchuc == 7)
		{
			printf("\nBay muoi");
		}
		else if (hangchuc == 8)
		{
			printf("\nTam muoi");
		}
		else if (hangchuc == 9)
		{
			printf("\nChin muoi");
		}


		if (hangdonvi == 1)
		{
			printf("Mot");
		}
		else if (hangdonvi == 2)
		{
			printf("Hai");
		}
		else if (hangdonvi == 3)
		{
			printf("Ba");
		}
		else if (hangdonvi == 4)
		{
			printf("Bon");
		}
		else if (hangdonvi == 5)
		{
			printf("Nam");
		}
		else if (hangdonvi == 6)
		{
			printf("Sau");
		}
		else if (hangdonvi == 7)
		{
			printf("Bay");
		}
		else if (hangdonvi == 8)
		{
			printf("Tam");
		}
		else if (hangdonvi == 9)
		{
			printf("Chin");
		}
	}
	else
	{
		printf("\nSo chu so phai la 2 chu so ! Xin kiem tra lai !");
	}


	_getch();
	return 0;
}