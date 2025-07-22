#include <stdio.h>
#include <stdlib.h>
#define BOYUT 100

// Stack i�lemleri
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
        scanf(" %c",&secim);   //scanften kalan enteri temizler bo�luk

    } while (secim=='e' || secim=='E');  //klullan�c� evet dedi�i s�rece do i�indekileri yap
    printf("\nStack icerigi (son girilen ilk cikar):\n");
    while (ust>=0) //stackteki t�m elemanlar� ters--son giren ilk ��kar diye yazd�r�yoruz
	{
        printf("%d ",yigin[ust]);
        ust--;
    }
    printf("\n");
}

// Queue i�lemleri
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

