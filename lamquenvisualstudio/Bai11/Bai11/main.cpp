#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int soxe;
	printf("\nNhap so xe: ");
	scanf_s("%d", &soxe);

	int sochuso;
	sochuso = log10((double)soxe) + 1;
	printf("\nso chu so=%d", sochuso);
	int sonut = 0;
	//lan1//
	sonut += soxe % 10;
	soxe /= 10;
	//lan2//
	sonut += soxe % 10;
	soxe /= 10;
	//lan3//
	sonut += soxe % 10;
	soxe /= 10;
	//lan4//
	sonut += soxe % 10;
	soxe /= 10;
	//lan5//
	sonut += soxe % 10;
	soxe /= 10;

	sonut %= 10;

	 

	
	
	

	

	sochuso == 5 ? printf("\nSo nut=%d", sonut) : printf("so xe phai la 5 chu so!!! xin vui long nhap lai");


	 _getch();
	
	return 0;
}