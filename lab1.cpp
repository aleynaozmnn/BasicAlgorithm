#include <stdio.h>
#include <string.h>
#define SIZE 20
/*
void rightRotate(char *str,int shift) {
    int len=strlen(str);
    if (len==0) return;  // Boþ string kontrolü

    shift = shift%len;  // Eðer kaydýrma uzunluktan büyükse mod al
    if (shift==0) return;  // Kaydýrmaya gerek yoksa çýk

    char temp[shift]; // Geçici dizi (kaydýrýlacak karakterleri tutacak)

    // Son shift kadar karakteri geçici diziye kopyala
    for (int i=0;i<shift;i++) {
        *(temp+i) =*(str+len-shift+i);
    }

    // Stringi saða kaydýr
    for (int i=len-1; i>=shift;i--) {
        *(str+i) = *(str+i-shift);
    }

    // Geçici dizideki karakterleri baþa ekle
    for (int i=0;i<shift; i++) {
        *(str+i) = *(temp+i);
    }
}

int main() {
    char str[SIZE] ;
    printf("Lutfen bir string giriniz:\n"); scanf("%s",&str);
    int shift = 3;           // Kaç karakter saða kaydýrýlacak
    printf("Stringin onceki hali-> %s\n", str);
    rightRotate(str, shift);
    printf("Stringin sonraki hali-> %s\n", str);
    return 0;
} */


#include <stdio.h>

void rightRotate(char *str, int shift) {
    // String uzunluðunu manuel hesapla
    int len = 0;
    while (*(str + len) != '\0') {
        len++;
    }

    if (len == 0) return;  // Boþ string kontrolü

    shift = shift % len;  // Eðer kaydýrma uzunluktan büyükse mod al
    if (shift == 0) return;  // Kaydýrmaya gerek yoksa çýk

    char temp[shift]; // Kaydýrýlacak karakterleri geçici olarak sakla

    // Son shift kadar karakteri geçici diziye kopyala
    for (int i = 0; i < shift; i++) {
        *(temp + i) = *(str + len - shift + i);
    }

    // Stringi saða kaydýr (yer deðiþtir)
    for (int i = len - 1; i >= shift; i--) {
        *(str + i) = *(str + i - shift);
    }

    // Geçici dizideki karakterleri baþa ekle
    for (int i = 0; i < shift; i++) {
        *(str + i) = *(temp + i);
    }
}

int main() {
    char str[] = "Merhaba";  
    int shift = 3;  // Kaç karakter saða kaydýrýlacak

    printf("Önceki hali: %s\n", str);
    rightRotate(str, shift);
    printf("Sonraki hali: %s\n", str);

    return 0;
}

