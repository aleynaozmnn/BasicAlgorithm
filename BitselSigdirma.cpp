#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char metin[41] = "Yapay zeka gelecekte hayat�m�z� de�i�tirecek!";

	int dizi[10];
	for(int i=0;i<(40)/4;i++)
	{
		dizi[i]=((unsigned char)metin[i*4]<<24)|((unsigned char)metin[i*4+1]<<16)|((unsigned char)metin[i*4+2]<<8)|((unsigned char)metin[i*4+3]);
		
	}
	//Saklad���m�z veriyi geri al�rken, her karakteri yerine koymam�z gerekiyor.
	  printf("Cozulmus metin: ");
	  for(int i=0;i<10;i++)
	  {
	  	printf("%c%c%c%c",
       (dizi[i] >> 24) & 0xFF,  // 'A' karakterini ��kar en soldaki 8 bit a y� al�r
       (dizi[i] >> 16) & 0xFF,  // 'B' karakterini ��kar 2. 8 biti b yi al�r
       (dizi[i] >> 8) & 0xFF,   // 'C' karakterini ��kar
       dizi[i] & 0xFF);         // 'D' karakterini ��kar
	  	
	  }
}
