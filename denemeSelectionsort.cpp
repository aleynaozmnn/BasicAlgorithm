#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 20
int selectionSort(int *ptr,int size)
{
	for(int i=0;i<size-1;i++)
	{
		int *ptrMin=(ptr+i);
		for(int j=i+1;j<size;j++)
		{
			if(*(ptr+j)<*ptrMin)
			{
				ptrMin=(ptr+j);
			}
		}
		int temp=*(ptr+i);
		*(ptr+i)=*ptrMin;
		*ptrMin=temp;
	}
	
}
int main()
{
	int dizi[SIZE];
	srand(time(0));
	for(int i=0;i<SIZE;i++)
	{
		*(dizi+i)=rand()%101;
		
	}
	printf("Siralanmadan once:");
	for(int i=0;i<SIZE;i++)
	{
		printf("%d\n",*(dizi+i));
	}
	printf("\n");
	selectionSort(dizi,SIZE);
	for(int i=0;i<SIZE;i++)
	{
		printf("%d\n",*(dizi+i));
	}
	
	
}
