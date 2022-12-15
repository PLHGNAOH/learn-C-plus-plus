#include<stdio.h>
#include<conio.h>
int main()
{
	int soluong, dongia, tien;
	double thue;
	printf("Nhap vao soluong va don gia:");
	scanf_s("%d", &soluong);
	scanf_s("%d", &dongia);
	tien = soluong * dongia;
	thue = tien * 0.1;

	printf("\nTien va thue gia tri gia tang lan luot phai tra la:%d,%f", tien, thue);



	_getch();
	return 0;
}