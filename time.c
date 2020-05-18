#include<stdio.h>
int main()
{
	int tong, gio, phut,giay;
	printf("nhap tong so giay: ");
	scanf("%i", &tong);
	gio=tong/3600;
	phut=(tong%3600)/60;
	giay=((tong%3600)%60);
	printf("%i:%i:%i", gio, phut, giay);
	return 0;
}
