#include <stdio.h> 
#include <conio.h>  



int main()
{
	
	int namsinh, namhientai, tuoi;

	printf("\nNhap vao nam sinh cua ban : ");
	scanf_s("%d", &namsinh);

	printf("\nNhap vao nam hien tai: ");
	scanf_s("%d", &namhientai);

	tuoi = namhientai - namsinh;

	
	printf("\nBan sinh nam %d => ban %d tuoi !", namsinh, tuoi);

	_getch();
	return 0;
}

