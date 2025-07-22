#include <stdio.h>
#include <stdlib.h>
#define BOYUT 100

// Stack iþlemleri
void stackYapisi() 
{
    int yigin[BOYUT];
    int ust=-1;
    int sayi;
    char secim;
    printf("\nStack Yapisi\n");
    do {
        printf("Bir sayi giriniz:");
        scanf("%d",&sayi);
        ust++;
        yigin[ust]=sayi;
        printf("Devam etmek istiyor musunuz?(e/h):");
        scanf(" %c",&secim);   //scanften kalan enteri temizler boþluk

    } while (secim=='e' || secim=='E');  //klullanýcý evet dediði sürece do içindekileri yap
    printf("\nStack icerigi (son girilen ilk cikar):\n");
    while (ust>=0) //stackteki tüm elemanlarý ters--son giren ilk çýkar diye yazdýrýyoruz
	{
        printf("%d ",yigin[ust]);
        ust--;
    }
    printf("\n");
}

// Queue iþlemleri
void queueYapisi() 
{
    int kuyruk[BOYUT];
    int bas=0;
	int son=0;
    int sayi;
    char secim;
    printf("\nKuyruk Yapisi\n");
    do {
        printf("Bir sayi giriniz:");
        scanf("%d", &sayi);
        kuyruk[son]=sayi;
        son++;
        printf("Devam etmek istiyor musunuz?(e/h):");
        scanf(" %c",&secim);

    } while (secim=='e' || secim=='E');
    printf("\nQueue icerigi (ilk girilen ilk cikar):\n");
    while (bas<son) 
	{
        printf("%d ",kuyruk[bas]);
        bas++;
    }
    printf("\n");
}

int main() 
{
    stackYapisi();
    queueYapisi();
	return 0;
}

