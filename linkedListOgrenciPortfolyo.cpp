#include <stdio.h>
#include <stdlib.h>
typedef struct OGRENCI {
    int id;            
    float vize;         
    float final;        
    float ortalama;     
    struct OGRENCI* sonraki;  
} ogrenci;
void ogrenciEkle(ogrenci** ilk) {
    ogrenci* yeniOgrenci=(ogrenci*)malloc(sizeof(ogrenci));
    printf("Ogrencinin ID'sini giriniz:\n");
    scanf("%d",&yeniOgrenci->id);
    printf("Ogrencinin vize notunu giriniz:\n");
    scanf("%f",&yeniOgrenci->vize);
    printf("Ogrencinin final notunu giriniz:\n");
    scanf("%f",&yeniOgrenci->final);
    
    yeniOgrenci->ortalama=(yeniOgrenci->vize*0.4)+(yeniOgrenci->final*0.6);
    yeniOgrenci->sonraki=NULL;   
    if (*ilk==NULL) 
	{
        *ilk=yeniOgrenci;  
    } 
	else 
	{
        ogrenci* temp=*ilk;
        while (temp->sonraki!=NULL) 
		{
            temp=temp->sonraki; //traverse
        }
        temp->sonraki=yeniOgrenci;  
    }
}
void yazdir(ogrenci* ilk) 
{
    ogrenci* temp=ilk;
    if (temp==NULL) 
	{
        printf("Liste boþ\n");
    } 
	else 
	{
        printf("ID\tVize\tFinal\tOrtalama\n");
        while(temp!=NULL) 
		{
            printf("%d\t%.2f\t%.2f\t%.2f\n",temp->id,temp->vize,temp->final,temp->ortalama);
            temp=temp->sonraki;
        }
    }
}
int main() 
{
    ogrenci* ilkOgrenci=NULL;
    int devam=1;
    while (devam) 
	{
        char cevap;
        ogrenciEkle(&ilkOgrenci); 
        printf("Devam etmek ister misiniz\n");
        scanf(" %c",&cevap);
        if (cevap == 'H' || cevap == 'h') {
            devam = 0; // Kullanýcý devam etmek istemediðinde döngü sonlanýr
        }
    }
    yazdir(ilkOgrenci);
    return 0;
}

