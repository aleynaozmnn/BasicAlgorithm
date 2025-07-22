#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
//char dizisini pointer ile yaz
int main()
{
	char metin[SIZE];
	printf("Lutfen bir metin giriniz:\n");
	gets(metin);
	char *str;
	str=metin;
	while(*str!='\0')
	{
		printf("%c\n",*str);
		str++;
	}
 
}
