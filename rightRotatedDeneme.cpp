#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int rightRotate(char *str,int shift)
{
	int len=0;
	while(*(str+len)!='\0')
	{
		len++;
	}
	
	if(len==0) return 0;
	shift%=len;
	if(shift==0) return 0;
	char temp[shift];
	for(int i=0;i<shift;i++)
	{
		*(temp+i)=*(str+len-shift+i);
	}
	for(int i=len-1;i>=shift;i--)
	{
		*(str+i)=*(str+i-shift);
	}
	for(int i=0;i<shift;i++)
	{
		*(str+i)=*(temp+i);
	}
}
int main()
{
	char dizi[100];
	int shift;
	printf("Lutfen bir string giriniz:\n"); scanf("%s",&dizi);
	printf("Kaydirma miktarini giriniz\n"); scanf("%d",&shift);
	rightRotate(dizi,shift);
	printf("Sonuc: %s\n",dizi);
	
	
}

int solaKaydir(int sayi,int miktar)
{
	if(sayi==miktar) return 2;
	return 2*solaKaydir(sayi-1,miktar)
}
