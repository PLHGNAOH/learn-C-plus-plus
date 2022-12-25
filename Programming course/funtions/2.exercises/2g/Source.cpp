#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>
void enter(int &n)
{
	do
	{
		printf("\nenter a posible interger n ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("\nplease re-enter");
		}

	} while (n < 0);

}
bool checksquarenumber(int n)
{
	int i = sqrt(n);
	if (i * i == n)
	{
		return true;
	}
	else if (i * i != 0)
	{
		return false;
	}

}
int sum(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if (checksquarenumber(i) == true)
		{
			s = s + i;
		}
		
	}
	return s;
}
int main()
{
	int a, s;
	enter(a);
	s = checksquarenumber(a);
	printf("\n%d", s);
	_getch();
	return 0;
}