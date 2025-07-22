#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int lrs(int sayi,int miktar)
{
	int bitUzunlugu=sayi*8;
	miktar=miktar%bitUzunlugu;
	return (sayi<<miktar)|(sayi>>(bitUzunlugu-miktar));
}

int main()
{
	int sayi=1;
	int miktar=2;
	int sonuc=lrs(sayi,miktar);
	printf("1 in 2 defa sola kaydırılmış hali: %d",sonuc);
	return 0;
}




fakHesapla(int sayi)
{
	if(sayi<=1)
	{
		return 1;
	}
	return sayi*fakHesapla(sayi-1);
}

int usal(int taban,int us)
{
	if(ust<=0) return 1;
	return sayi*usal(sayi,taban-1)
	
}
