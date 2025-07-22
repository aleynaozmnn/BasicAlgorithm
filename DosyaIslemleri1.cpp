#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *dosya=fopen("dosya.txt","w");
	if(dosya==NULL)
	{
		printf("Dosya açilma hatasi\n");
		 
	}
	for(int i=32;i<128;i++)
    {
		fputc(i,dosya);
		printf("\n");
   }
   fclose(dosya);
   dosya=fopen("dosya.txt","r");
   for(int i=0;i<255;i++)
    {
	 
		printf("%c\n",fgetc(dosya));
   }
   fclose(dosya);
}
