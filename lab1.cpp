#include <stdio.h>
#include <string.h>
#define SIZE 20
/*
void rightRotate(char *str,int shift) {
    int len=strlen(str);
    if (len==0) return;  // Bo� string kontrol�

    shift = shift%len;  // E�er kayd�rma uzunluktan b�y�kse mod al
    if (shift==0) return;  // Kayd�rmaya gerek yoksa ��k

    char temp[shift]; // Ge�ici dizi (kayd�r�lacak karakterleri tutacak)

    // Son shift kadar karakteri ge�ici diziye kopyala
    for (int i=0;i<shift;i++) {
        *(temp+i) =*(str+len-shift+i);
    }

    // Stringi sa�a kayd�r
    for (int i=len-1; i>=shift;i--) {
        *(str+i) = *(str+i-shift);
    }

    // Ge�ici dizideki karakterleri ba�a ekle
    for (int i=0;i<shift; i++) {
        *(str+i) = *(temp+i);
    }
}

int main() {
    char str[SIZE] ;
    printf("Lutfen bir string giriniz:\n"); scanf("%s",&str);
    int shift = 3;           // Ka� karakter sa�a kayd�r�lacak
    printf("Stringin onceki hali-> %s\n", str);
    rightRotate(str, shift);
    printf("Stringin sonraki hali-> %s\n", str);
    return 0;
} */


#include <stdio.h>

void rightRotate(char *str, int shift) {
    // String uzunlu�unu manuel hesapla
    int len = 0;
    while (*(str + len) != '\0') {
        len++;
    }

    if (len == 0) return;  // Bo� string kontrol�

    shift = shift % len;  // E�er kayd�rma uzunluktan b�y�kse mod al
    if (shift == 0) return;  // Kayd�rmaya gerek yoksa ��k

    char temp[shift]; // Kayd�r�lacak karakterleri ge�ici olarak sakla

    // Son shift kadar karakteri ge�ici diziye kopyala
    for (int i = 0; i < shift; i++) {
        *(temp + i) = *(str + len - shift + i);
    }

    // Stringi sa�a kayd�r (yer de�i�tir)
    for (int i = len - 1; i >= shift; i--) {
        *(str + i) = *(str + i - shift);
    }

    // Ge�ici dizideki karakterleri ba�a ekle
    for (int i = 0; i < shift; i++) {
        *(str + i) = *(temp + i);
    }
}

int main() {
    char str[] = "Merhaba";  
    int shift = 3;  // Ka� karakter sa�a kayd�r�lacak

    printf("�nceki hali: %s\n", str);
    rightRotate(str, shift);
    printf("Sonraki hali: %s\n", str);

    return 0;
}

