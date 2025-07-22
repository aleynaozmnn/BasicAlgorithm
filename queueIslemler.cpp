#include <stdio.h>
#define BOYUT 100

int yigin[BOYUT], ust = -1;
int kuyruk[BOYUT], bas = 0, son = 0;

// Stack Fonksiyonlarý
void ekleStack(int sayi) {
    if (ust < BOYUT - 1) {
        yigin[++ust] = sayi;
        printf("%d stack'e eklendi\n", sayi);
    } else {
        printf("Stack dolu!\n");
    }
}

void silStack(int sayi) {
    int bulundu = 0;
    for (int i = ust; i >= 0; i--) {
        if (yigin[i] == sayi) {
            for (int j = i; j < ust; j++) {
                yigin[j] = yigin[j + 1];
            }
            ust--;
            bulundu = 1;
            printf("%d stack'ten silindi\n", sayi);
            break;
        }
    }
    if (!bulundu) {
        printf("%d stack'te bulunamadi\n", sayi);
    }
}

void gosterStack(int sayi) {
    for (int i = ust; i >= 0; i--) {
        if (yigin[i] == sayi) {
            printf("%d stack'te bulundu (%d. indiste)\n", sayi, i);
            return;
        }
    }
    printf("%d stack'te bulunamadi\n", sayi);
}

void listeleStack() {
    if (ust == -1) {
        printf("Stack bos!\n");
    } else {
        printf("Stack icerigi:\n");
        for (int i = ust; i >= 0; i--) {
            printf("%d ", yigin[i]);
        }
        printf("\n");
    }
}

// Queue Fonksiyonlarý
void ekleQueue(int sayi) {
    if (son < BOYUT) {
        kuyruk[son++] = sayi;
        printf("%d kuyruga eklendi\n", sayi);
    } else {
        printf("Kuyruk dolu!\n");
    }
}

void silQueue(int sayi) {
    int bulundu = 0;
    for (int i = bas; i < son; i++) {
        if (kuyruk[i] == sayi) {
            for (int j = i; j < son - 1; j++) {
                kuyruk[j] = kuyruk[j + 1];
            }
            son--;
            bulundu = 1;
            printf("%d kuyruktan silindi\n", sayi);
            break;
        }
    }
    if (!bulundu) {
        printf("%d kuyrukta bulunamadi\n", sayi);
    }
}

void gosterQueue(int sayi) {
    for (int i = bas; i < son; i++) {
        if (kuyruk[i] == sayi) {
            printf("%d kuyrukta bulundu (%d. indiste)\n", sayi, i);
            return;
        }
    }
    printf("%d kuyrukta bulunamadi\n", sayi);
}

void listeleQueue() {
    if (bas == son) {
        printf("Kuyruk bos!\n");
    } else {
        printf("Kuyruk icerigi:\n");
        for (int i = bas; i < son; i++) {
            printf("%d ", kuyruk[i]);
        }
        printf("\n");
    }
}

// Main Fonksiyonu
int main() {
    int yapiSecim, secim, sayi;

    do {
        printf("\nMenu:\n1. Stack Islemleri\n2. Queue Islemleri\n3. Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &yapiSecim);

        if (yapiSecim == 1) {
            do {
                printf("\nStack Menusu:\n1. Ekle\n2. Bul ve Sil\n3. Bul ve Goster\n4. Listele\n5. Geri Don\n");
                printf("Seciminiz: ");
                scanf("%d", &secim);

                if (secim == 1) {
                    printf("Eklenecek sayi: ");
                    scanf("%d", &sayi);
                    ekleStack(sayi);
                } else if (secim == 2) {
                    printf("Silinecek sayi: ");
                    scanf("%d", &sayi);
                    silStack(sayi);
                } else if (secim == 3) {
                    printf("Gosterilecek sayi: ");
                    scanf("%d", &sayi);
                    gosterStack(sayi);
                } else if (secim == 4) {
                    listeleStack();
                }

            } while (secim != 5);

        } else if (yapiSecim == 2) {
            do {
                printf("\nQueue Menusu:\n1. Ekle\n2. Bul ve Sil\n3. Bul ve Goster\n4. Listele\n5. Geri Don\n");
                printf("Seciminiz: ");
                scanf("%d", &secim);

                if (secim == 1) {
                    printf("Eklenecek sayi: ");
                    scanf("%d", &sayi);
                    ekleQueue(sayi);
                } else if (secim == 2) {
                    printf("Silinecek sayi: ");
                    scanf("%d", &sayi);
                    silQueue(sayi);
                } else if (secim == 3) {
                    printf("Gosterilecek sayi: ");
                    scanf("%d", &sayi);
                    gosterQueue(sayi);
                } else if (secim == 4) {
                    listeleQueue();
                }

            } while (secim != 5);

        } else if (yapiSecim != 3) {
            printf("Gecersiz secim!\n");
        }

    } while (yapiSecim != 3);

    printf("Programdan cikildi.\n");
    return 0;
}

