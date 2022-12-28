#include<stdio.h>
#include<conio.h>
int main()
{
	int month;
	printf("\nenter month ");
	scanf_s("%d", &month);
	switch (month)
	{
	case 1:
	case 2:
	case 3:
		printf("Qui mot-mua xuan");
		break;
	case 4:
	case 5:
	case 6:
		printf("Qui hai-mua ha");
		break;
	case 7:
	case 8:
	case 9:
		printf("Qui ba-mua thu");
		break;
	case 10:
	case 11:
	case 12:
		printf("Qui bon-mua dong");
		break;
	
	}
	_getch();
	return 0;

}