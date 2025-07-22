#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
#include<string.h>
#include<time.h>
//pointer kullanarak dizinin tek elemanlarýný tek diziye çift olanlarý çift diziye ekleyelim
int main()
{
	int dizi[20];
	int cDizi[10],tDizi[10];
	int *cSayac,*tSayac;
	tSayac=tDizi;
	cSayac=cDizi;
	int *ptr;
	ptr=dizi;
	srand(time(0));
	for(int i=0;i<20;i++)
	{
		*(ptr+i)=rand()%10;
	}
	printf("Orijinal dizi:\n");
	for(int i=0;i<20;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	 
	for(int i=0;i<20;i++)
	{
		if(*(ptr+i)%2==0)
		{
			*cSayac=*(ptr+i);
			cSayac++;	
		}
		else{
			*tSayac=*(ptr+i);
			tSayac++;
		}
	}
	printf("Cift sayilar:\n");
	for(int *ptr=cDizi;ptr<cSayac;ptr++)
	{
		printf("%d\n",*ptr);
	}
	printf("\n");
	printf("Tek sayilar:\n");
    for (int *ptr = tDizi; ptr < tSayac; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
	
	
	
}
