#include<stdio.h>
int yazdir(int sayi)
{
	if(sayi==0) return 0;
	printf("%d\n",sayi);
	yazdir(sayi-1);
}
int main()
{
	int x;
	printf("x:?\n"); scanf("%d",&x);
	yazdir(x);
}
