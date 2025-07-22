#include<stdio.h>
int recursiveTopla(int sayi)
{
	if(sayi<=0) return 0;
	return sayi+recursiveTopla(sayi-1);
}
int main()
{
	int x;
	printf("x:?\n"); scanf("%d",&x);
	int sonuc=recursiveTopla(x);
	printf("Toplam: %d\n",sonuc);
	return 0;
}
