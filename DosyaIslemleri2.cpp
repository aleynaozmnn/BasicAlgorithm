#include<stdio.h>
#include<conio.h>
//dosyadan okuyup farklý dosyay kopyalama iþlemi

int main()
{
	FILE *fp1,*fp2;
	 
	char cd1;
	if((fp1=fopen("deneme.exe","rb"))==NULL)
	{
		printf("Kaynak dosya acilamadi\n");
		return 0;
	}
	if( (fp2=fopen("denemeKopya.exe","wb"))==NULL)
	{
		printf("hedef kopya dosyasi acilamadi\n");
		return 0;
	}
	while(!feof(fp1))
	{
		cd1=fgetc(fp1);
		if(ferror(fp1))
		{
			printf("Kaynak dosyadan okuma hatai\n");
		}
		if(!feof(fp1))
		{
			fputc(cd1,fp2);
		}
		if(ferror(fp2))
		{
			printf("hedef kopya dosya yazma hatasi\n");
			getch();
			return 0;
		}
	}
	fclose(fp1);
	fclose(fp2);
}
