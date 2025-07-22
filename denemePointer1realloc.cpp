#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	FILE *dosya=fopen("deneme.txt","w");
	if(dosya==NULL) printf("Dosya acma hatasi\n");
	srand(time(0));
	for(int i=0;i<100;i++)
	{
		int randSayi=rand()%101;
		fprintf(dosya,"%d\n",randSayi);
	}
	fclose(dosya);
	dosya=fopen("deneme.txt","r");
	if(dosya==NULL) printf("Dosya okuma hatasi\n");
	int *dizi=NULL;
	int sayi,sayac=0;
	while(fscanf(dosya,"%d",&sayi)==1)
	{
		if((sayi & (1<<5))!=0)
		{
			dizi=(int*) realloc(dizi,(sayac+1)*sizeof(int));
			*(dizi+sayac)=sayi;
			sayac++;
		}
	}
	fclose(dosya);
	printf("5. biti 1 olan sayilar\n");
	for(int i=0;i<sayac;i++)
	{
		printf("%d\n",*(dizi+i));
	}
	free(dizi);
	return 0;
}
