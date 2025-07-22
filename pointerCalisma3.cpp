#include<stdio.h>
#include<stdlib.h>
//diziyi pointer ile yaz
int main()
{
	int dizi[100];
	int *ptr;
	ptr=&dizi[0];
	printf("Lutfen eleman giriniz:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("Pointer aritmetigi kullanarak  yazilan dizi\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",*(ptr+i));
	  
	}
	
		 
	
}



 

