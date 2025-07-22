#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char metin[41] = "Yapay zeka gelecekte hayatýmýzý deðiþtirecek!";

	int dizi[10];
	for(int i=0;i<(40)/4;i++)
	{
		dizi[i]=((unsigned char)metin[i*4]<<24)|((unsigned char)metin[i*4+1]<<16)|((unsigned char)metin[i*4+2]<<8)|((unsigned char)metin[i*4+3]);
		
	}
	//Sakladýðýmýz veriyi geri alýrken, her karakteri yerine koymamýz gerekiyor.
	  printf("Cozulmus metin: ");
	  for(int i=0;i<10;i++)
	  {
	  	printf("%c%c%c%c",
       (dizi[i] >> 24) & 0xFF,  // 'A' karakterini çýkar en soldaki 8 bit a yý alýr
       (dizi[i] >> 16) & 0xFF,  // 'B' karakterini çýkar 2. 8 biti b yi alýr
       (dizi[i] >> 8) & 0xFF,   // 'C' karakterini çýkar
       dizi[i] & 0xFF);         // 'D' karakterini çýkar
	  	
	  }
}
