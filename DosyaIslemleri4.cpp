#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int asalMi(int sayi)
{
	if(sayi<2)
	{
		return 0;
	}
	for(int i=2;i*i<=sayi;i++)
	{
		if(sayi%i==0) return 0;
	}
	return 1;
}
int main()
{
	FILE *dosya=fopen("sayilar.txt","w");
	FILE *dosya2;
	int dizi[100];
	
	if(dosya==NULL)
	{
		printf("dosya acilamadi\n");
		
	}
	srand(time(0));
	for(int i=0;i<100;i++)
	{
		dizi[i]=rand()%1001;
		fprintf(dosya,"%d\n",dizi[i]);
	}
	fclose(dosya);
	dosya2=fopen("asal.txt","w");
	if(dosya2==NULL)
	{
		printf("dosya acilamadi\n");
		return 1;
	}
	int sayi;
	dosya=fopen("sayilar.txt","r");
	while(fscanf(dosya,"%d ",&sayi)!=EOF)
	{
		if(asalMi(sayi))
		{
			fprintf(dosya2,"%d\n",sayi);
		}
	}
     
	fclose(dosya);
	fclose(dosya2);
	return 0;
	 
}
