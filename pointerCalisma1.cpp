#include<stdio.h>
int main()
{
	char metin[100],*ptr;
	int sayac=0;
	int i=0;
	int harf;
 
	printf("Lutfen bir metin giriniz:\n"); fgets(metin,sizeof(metin), stdin);
	printf("Metin icinde aramak istediginiz harfi  giriniz:\n"); scanf(" %c",&harf);//önceki getsen kalan boþluk temizlendi
	ptr=metin;
	while(*ptr!='\0')
	{
		if(*ptr==harf)
		{
			printf("Index:%d\n",i);
			sayac++;
		}
		ptr++;
		i++;
	}
	printf("Toplam %d tane %c harfi bulundu\n",sayac,harf);
	return 0;
}
