#include<stdio.h>
#include<conio.h>
void Nhap(char& x)
{
	printf("\nEnter a character ");
	scanf_s("%c", &x);
}
char BienDoi(char x)
{
	if (x >= 'a' && x <= 'z')
	{
		x -= 32;
	}
	else if (x >= 'A' && x <= 'Z')
	{
		x += 32;
	}
	return x;
}
int main()
{
	char x;
	Nhap(x);
	char c = BienDoi(x);
	printf("\nCharacter after change is %c", c);
	_getch();
	return 0;

}
