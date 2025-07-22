#include <stdio.h>
#include <stdlib.h>

#define MAX_DUGUM 10

// A??rl?kl? graf i?in d???m yap?s?
typedef struct dugum {
    int dugum_no;
    int agirlik;          // Kenar?n a??rl???
    struct dugum *pNext;  // Sonraki kom?u
} DUGUMLER;

// Kom?uluk listesi yap?s?
typedef struct liste {
    DUGUMLER *satir[MAX_DUGUM]; // Kom?uluk listesi
} LISTELER;

// D???m ekleme fonksiyonu (A??rl?kl?) - Yeni kom?uyu ba?a ekle
void dugumEkle(LISTELER *graf, int src, int dest, int agirlik) {
    DUGUMLER *yeniDugum = (DUGUMLER*) malloc(sizeof(DUGUMLER));
    yeniDugum->dugum_no = dest;
    yeniDugum->agirlik = agirlik; // Kenar?n a??rl???n? ekle
    yeniDugum->pNext = graf->satir[src];  // Yeni d???m?n pNext'ini mevcut ba?a ba?la
    
    graf->satir[src] = yeniDugum; // Yeni d???m? ba?a ekle
}

// Kom?uluk listesini yazd?rma fonksiyonu
void yazdir(LISTELER *graf) {
    for (int i = 0; i < MAX_DUGUM; i++) {
        DUGUMLER *p = graf->satir[i];
        printf("D???m %d: ", i);
        while (p != NULL) {
            printf("%d (A??rl?k: %d) -> ", p->dugum_no, p->agirlik);
            p = p->pNext;
        }
        printf("NULL\n");
    }
}

int main() {
    LISTELER graf = {{0}};  // Ba?lang??ta her sat?r NULL
    
for (int i = 0; i < MAX_DUGUM; i++) {
        graf.satir[i] = NULL;
    }
    
    // A??rl?kl? kenarlar? ekleyelim
    dugumEkle(&graf, 0, 1, 10);
    dugumEkle(&graf, 0, 4, 5);
    dugumEkle(&graf, 1, 2, 3);
    dugumEkle(&graf, 2, 3, 7);
    
    // Kom?uluk listesini yazd?ral?m
    yazdir(&graf);
    
    return 0;
}
