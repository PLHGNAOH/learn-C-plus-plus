#include<stdio.h>
#include<conio.h>
void enter(float &n)
{
	printf("\nenter n ");
	scanf_s("%f", &n);
}
int main()
{
	float a, b, c, ln;
	clearerr_s;
	enter(a); enter(b); enter(c);
	ln = a;
	if (ln < b)
		ln = b;
	if (ln < c)
		ln = c;
	printf("\nso lon nhat trong ba so %10.3f,%10.3f,%10.3f, la : %10.3f ", a, b, c, ln);
		_getch();
		return 0;

}
