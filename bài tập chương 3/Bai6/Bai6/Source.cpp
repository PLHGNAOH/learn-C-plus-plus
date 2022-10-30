#include<stdio.h>
#include<conio.h>
int main()
{
	int thang, nam;

	printf("\nNhap thang:");
	scanf_s("%d", &thang);
	if (thang < 1 || thang>12)
	{
		printf("\nThang nhap khong hop le");
		_getch();
		return 0;
	}
	printf("\nNhap nam: ");	scanf_s("%d", &nam);


	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
	{
		printf("\nThang co 31 ngay");

		if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
		{
			printf("\nNam nhuan ");
		}
		else
		{
			printf("\nNam khong nhuan");
		}
	}
	else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
	{
		printf("\nThang co 30 ngay");
	}
	if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
	{
		printf("\nNam nhuan");
	}
	else
	{
		printf("\nNam khong nhuan");
	}



	if (thang == 2)
	{


		if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
		{
			printf("\n co 29 ngay\nNam nhuan");
		}

		else
		{

			printf("\n co 28 ngay\nNam khong nhuan");
		}
	}




	_getch();
	return 0;
}