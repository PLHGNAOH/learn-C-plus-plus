#include<stdio.h>
#include<conio.h>
int main()
{
	int thang;
	printf("\nNhap thang ");
	scanf_s("%d", &thang);
	switch (thang)
	{
	case 1:
	case 2:
	case 3:
		printf("Qui mot ");
		break;
	case 4:
	case 5:
	case 6:
		printf("Qui hai ");
		break;
	case 7:
	case 8:
	case 9:
		printf("Qui ba ");
		break;
	case 10:
	case 11:
	case 12:
		printf("Qui bon");
		break;
		_getch();
		return 0;



	}

}