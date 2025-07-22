#include<stdio.h>
#include<stdlib.h>
 typedef struct OGRENCI{
	int id;
	float vize;
	float final;
	float ortalama;
	struct OGRENCI *next;
 }ogrenci;
 
void ogrenciEkle(ogrenci** ilk)
{
	ogrenci* yenidugum=(ogrenci*)malloc(sizeof(ogrenci));
	printf("Ogrenci Id:\n"); scanf("%d",&yenidugum->id);
	printf("Ogrenci vize:\n"); scanf("%f",&yenidugum->vize);
	printf("Ogrenci final:\n"); scanf("%f",&yenidugum->final);
	yenidugum->ortalama=(yenidugum->vize*0.4)+(yenidugum->final*0.6);
	yenidugum->next=NULL;
	if(*ilk==NULL) *ilk=yenidugum;
	else
	{
		ogrenci* temp=*ilk;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=yenidugum;
	}
	
}
void yazdir(ogrenci* ilk)
{
		ogrenci* temp=ilk;
		printf("Id\tVize\tFinal\tOrtalama\n");
		while(temp->next!=NULL)
		{
			printf("%d\t%.2f\t%.2f\t%.2f\n",temp->id,temp->vize,temp->final,temp->ortalama);
			temp=temp->next;
		}
		printf("\n");
	
}
int main()
{
	ogrenci* ilk=NULL;
	int devam=1;
	while(devam)
	{
		char cevap;
		ogrenciEkle(&ilk);
		printf("Devam etmek ister misiniz?\n"); scanf(" %c",&cevap);
		if(cevap=='H' || cevap=='h')
		{
			devam=0;
		}
		 
	}
	
	
}
