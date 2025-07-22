#include <stdio.h>
#include <stdlib.h>
#define BOYUT 100
// Stack için 
int yigin[BOYUT];
int ust = -1;

// Queue için
int kuyruk[BOYUT];
int bas = 0, son = 0;

void ekleStack(int sayi) {
    if (ust<BOYUT - 1) {
        yigin[++ust] = sayi;
        printf("%d stack'e eklendi\n", sayi);
    } else {
        printf("Stack dolu!\n");
    }
}

void bulVeSilStack(int aranan) {
    int kontrol=0;
    for (int i=ust;i>=0;i--) {
        if (yigin[i]==aranan) {
            for (int j=i;j<ust;j++) {
                yigin[j]=yigin[j+1];
            }
            ust--;
            kontrol=1;
            printf("%d stack'ten silindi\n",aranan);
            break;
        }
    }
    if (!kontrol) {
        printf("%d stack'te bulunamadi\n",aranan);
    }
}

void bulVeGosterStack(int aranan) {
    for (int i=ust;i>=0;i--) {
        if (yigin[i]==aranan) {
            printf("%d stack'te bulundu (%d.indiste)\n", aranan, i);
            return;
        }
    }
    printf("%d degeri bulunamadi\n", aranan);
}

void listeleStack() {
    if (ust==-1) {
        printf("Hata,Stack bos\n");
    } else {
        printf("Stack icerigi:\n");
        for (int i=ust;i>=0;i--) {
            printf("%d ",yigin[i]);
        }
        printf("\n");
    }
}
 
void ekleQueue(int sayi) {
    if (son<BOYUT) {
        kuyruk[son++]=sayi;
        printf("%d kuyruga eklendi\n",sayi);
    } else {
        printf("Kuyruk dolu!\n");
    }
}

void bulVeSilQueue(int aranan) {
    int kontrol=0;
    for (int i=bas;i<son;i++) {
        if (kuyruk[i]==aranan) {
            for (int j=i;j<son-1;j++) {
                kuyruk[j]=kuyruk[j+1];
            }
            son--;
            kontrol=1;
            printf("%d kuyruktan silindi\n",aranan);
            break;
        }
    }
    if (!kontrol) {
        printf("%d kuyrukta bulunamadi\n",aranan);
    }
}

void bulVeGosterQueue(int aranan) {
    for (int i=bas;i<son;i++) {
        if (kuyruk[i]==aranan) {
            printf("%d kuyrukta bulundu (%d.indiste)\n", aranan, i);
            return;
        }
    }
    printf("%d kuyrukta bulunamadi\n",aranan);
}

void listeleQueue() {
    if (bas==son) {
        printf("Kuyruk bos\n");
    } else {
        printf("Kuyruk icerigi:\n");
        for (int i=bas;i<son;i++) {
            printf("%d ",kuyruk[i]);
        }
        printf("\n");
    }
}
 
int main() {
        int secim, sayi, yapiSecim;
    do {
        printf("\nMenu:\n");
        printf("1. Stack Islemleri\n2. Queue Islemleri\n3. Cikis\n");
        printf("Yapmak istediginiz iþlemi secin (1/2/3): ");
        scanf("%d", &yapiSecim);

        if (yapiSecim == 1) { // Stack iþlemleri
            do {
                printf("\nStack Menusu:\n");
                printf("1. Ekle\n2. Bul ve Sil\n3. Bul ve Goster\n4. Tumunu Listele\n5. Cikis\n");
                printf("Seciminiz: ");
                scanf("%d", &secim);
                switch (secim) {
                    case 1:
                        printf("Eklenecek sayi: ");
                        scanf("%d", &sayi);
                        ekleStack(sayi);
                        break;
                    case 2:
                        printf("Silinecek sayi: ");
                        scanf("%d", &sayi);
                        bulVeSilStack(sayi);
                        break;
                    case 3:
                        printf("Gosterilecek sayi: ");
                        scanf("%d", &sayi);
                        bulVeGosterStack(sayi);
                        break;
                    case 4:
                        listeleStack();
                        break;
                    case 5:
                        printf("Stack menusunden çikis islemi gerceklestiriliyor\n");
                        break;
                    default:
                        printf("Gecersiz secim!\n");
                }
            } while (secim != 5);
        } else if (yapiSecim == 2) { // Queue iþlemleri
            do {
                printf("\nQUEUE MENÜSÜ:\n");
                printf("1. Ekle\n2. Bul ve Sil\n3. Bul ve Goster\n4. Tumunu Listele\n5. Cikis\n");
                printf("Seciminiz: ");
                scanf("%d", &secim);
                switch (secim) {
                    case 1:
                        printf("Eklenecek sayi: ");
                        scanf("%d", &sayi);
                        ekleQueue(sayi);
                        break;
                    case 2:
                        printf("Silinecek sayi: ");
                        scanf("%d", &sayi);
                        bulVeSilQueue(sayi);
                        break;
                    case 3:
                        printf("Gosterilecek sayi: ");
                        scanf("%d", &sayi);
                        bulVeGosterQueue(sayi);
                        break;
                    case 4:
                        listeleQueue();
                        break;
                    case 5:
                        printf("Queue menusunden çýkýlýyor...\n");
                        break;
                    default:
                        printf("Gecersiz secim!\n");
                }
            } while (secim != 5);
        } else if (yapiSecim == 3) {
            printf("Programdan cikiliyor!\n");
        } else {
            printf("Gecersiz secim!\n");
        }
    } while (yapiSecim != 3);
    
    
      return 0;
}
   


