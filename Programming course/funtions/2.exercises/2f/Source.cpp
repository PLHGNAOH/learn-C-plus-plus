#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>
void enter(int& n)
{
	do
	{
		printf("\nenter a posible interger n ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("\nplease re-enter ");
		}
	} while (n < 0);
}
bool checkprimes (int n)
{
	int count = 0;
	if (n < 2)
	{
		return false;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}

	}
	if (count == 0)
	{
		return true;

	}
	else
	{
		return false;
	}
	
	
}
int sum(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if (checkprimes(i) == true)
		{
			s=s+ i;
		}
	}
	printf("\nsum=%d", s);
	return s;
}
int main()
{
	int a;
	enter(a);
	checkprimes(a);
	sum(a);
	
	_getch();
	return 0;
}
