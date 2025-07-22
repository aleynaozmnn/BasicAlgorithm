#include <stdio.h>
#include <stdlib.h>

#define MAX_DUGUM 10
#define INF 0 // A??rl?k olmayan yerler i?in 0 kullan?yoruz, yoksa ba?ka bir de?er de se?ilebilir (?rne?in, -1).

// Kom?uluk matrisini ba?latma fonksiyonu
void matrisBaslat(int matris[MAX_DUGUM][MAX_DUGUM]) {
    for (int i = 0; i < MAX_DUGUM; i++) {
        for (int j = 0; j < MAX_DUGUM; j++) {
            matris[i][j] = INF;  // Ba?lang??ta t?m kenarlar yok, yani -1 veya 0 ile ba?lat?l?r.
        }
    }
}

// D???m ekleme fonksiyonu (A??rl?kl?)
void dugumEkle(int matris[MAX_DUGUM][MAX_DUGUM], int src, int dest, int agirlik) {
    matris[src][dest] = agirlik; // src'den dest'e giden kenar?n a??rl???n? ekler.
}

// Kom?uluk matrisini yazd?rma fonksiyonu
void yazdir(int matris[MAX_DUGUM][MAX_DUGUM]) {
    for (int i = 0; i < MAX_DUGUM; i++) {
        printf("D???m %d: ", i);
        for (int j = 0; j < MAX_DUGUM; j++) {
            if (matris[i][j] != INF) { // INF olmayan yerleri yazd?r?yoruz.
                printf(" -> %d (A??rl?k: %d)", j, matris[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int matris[MAX_DUGUM][MAX_DUGUM]; // Kom?uluk matrisi
    matrisBaslat(matris);  // Ba?lang??ta t?m kenarlar? yok (INF ile ba?lat?l?r)

    // A??rl?kl? kenarlar? ekleyelim
    dugumEkle(matris, 0, 1, 10);  // 0 -> 1 (A??rl?k: 10)
    dugumEkle(matris, 0, 4, 5);   // 0 -> 4 (A??rl?k: 5)
    dugumEkle(matris, 1, 2, 3);   // 1 -> 2 (A??rl?k: 3)
    dugumEkle(matris, 2, 3, 7);   // 2 -> 3 (A??rl?k: 7)

    // Kom?uluk matrisini yazd?ral?m
    yazdir(matris);
    
    return 0;
}
