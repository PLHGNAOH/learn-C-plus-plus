#include<stdio.h>
#include<conio.h>
int main()
{
	unsigned int soluong, dongia, tien, thue;
	printf("\nNhap vao so luong mua: ");
	scanf("%u", &soluong);

	printf("\nNhap vao so luong mot don gia: ");
	scanf("%u", &dongia);

	tien = soluong * dongia;
	thue = tien * 0.1;
	printf("\ntien=%u", tien);
	printf("\nthue=%u", thue);
	
	_getch();
	return 0;
}