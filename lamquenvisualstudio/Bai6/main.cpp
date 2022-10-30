#include <stdio.h>
#include <conio.h>
int main()
{
	int namsinh, namhientai, tuoi;
	printf("\n Nhap vào nam sinh: ");
	scanf_s("%d", & namsinh);
	namhientai = 2022;
	tuoi = namhientai - namsinh;
	printf("\nBan sinh nam %d => ban %d tuoi !",namsinh,tuoi);
	_getch;
	return 0;
}



