#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	cout << "nhap c: ";
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b && b == c)
			cout << "la tam giac deu";
		else
		{
			if (b * b + c * c == a * a || a * a + c * c == b * b || a * a + b * b == c * c)
			{
				if (a == b || b == c || c == a)
					cout << "la tam giac vuong can";
				else cout << "la tam giac vuong";
			}
			else
			{
				if (a == b || b == c || c == a)
					cout << "la tam giac can";
				else cout << "la tam giac thuong";
			}
		}
	}
	else cout << "khong la tam giac";
	return 1;
}