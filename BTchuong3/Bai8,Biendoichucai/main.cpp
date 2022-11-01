#include<stdio.h>
#include<conio.h>
int main()
{
	char kytu;
	printf("\nNhap ki tu ");
	scanf_s("%c", &kytu);
	if ((kytu >= 'a' && kytu <= 'z') || (kytu >= 'A' && kytu <= 'Z'))
	{
		if (kytu >= 'a' && kytu <= 'z')
		{
			kytu -= 32;
		}
		else
		{
			kytu += 32;
		}
		printf("\nKy tu sau khi bien doi la :%c", kytu);

	}
	else
	{
		printf("\nKy tu khong hop le!!");
	}




	_getch();
	return 0;
		
 }