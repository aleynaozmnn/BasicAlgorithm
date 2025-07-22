#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *dizi=NULL;
	int sayi,sayac=0;
	printf("Lutfen yeni bir sayi giriniz:\n");
	printf("Cikis icin negatif sayi tuslayiniz\n");
	while(1)
	{
		scanf("%d",&sayi);
		if(sayi<0) break;
		if(sayi%3==0 && sayi%5==0)
		{
			dizi=(int*)realloc(dizi,(sayac+1)*sizeof(int));
			*(dizi+sayac)=sayi;
			sayac++;
		}
	}
	printf("Pointer aritmetigi kullanilarak yazilan sayilar\n");
	for(int i=0;i<sayac;i++)
	{
		printf("%d\t",*(dizi+i));
	}
	free(dizi);
	return 0;
	
}
