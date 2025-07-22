#include<stdio.h>
#include<stdlib.h>
//verilen cümledeki karakteri ara pointer ile
char* karakterAra(char *metin,char karakter)
{
	int sayac=0;
	while(*metin!='\0')
	{
		if(*metin==karakter)
		{
			return metin;
		}
		metin++;
	}
	return NULL;
}

int main()
{
	char metin[]="Merhaba bugun nasilsiniz?";
	char karakter;
	int index;
	printf("Metnin ilk hali: %s\n",metin);
	printf("Lutfen metin icinde aramak istediginiz karakteri giriniz\n");
	scanf(" %c",&karakter);	
	char *sonuc=karakterAra(metin,karakter);
	index = sonuc - metin;  
	if(sonuc!=NULL)
	{
		printf("Aradiginz %c karakteri metin icinde %d. indextedir\n",karakter,index);
	}
	else
	{
		printf("Aranan %c karakteri metin icinde bulunanamamistir\n",karakter);
	}
}
