#include<stdio.h>
#include<conio.h>
//dosyadaki elemanlarý okuyup  deðiþtirmek 
int main()
{
	FILE *fp1;
	int dizi[5];
	for(int i=0;i<5;i++)
	{
		printf("Int eleman giriniz:\n");
		scanf("%d",&dizi[i]);
	}
	if((fp1=fopen("deneme.txt","wb"))==NULL)
	{
		printf("Dosya acilamadi\n");
		getch();
		return 1;
	}
	if((fwrite(dizi,sizeof(dizi),1,fp1))!=1)
	{
		printf("Dosya yazma hatasi\n");
		getch();
		return 1;
	}
	fclose(fp1);
	if((fp1=fopen("deneme.txt","rb"))==NULL)
	{
		printf("Dosya acilamadi\n");
	}
	printf("Degerleri silinmis dizi elemanlari:\n");
	for(int i=0;i<5;i++)
	{
		dizi[i]=0;
		printf("%d\t",dizi[i]);
		getch();
	}
	return 0;
}
