#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int fibHesapla(int n)
{
	if(n==0)  return 1; 
	//printf("%d\n",n);
	if(n==1)  return 1;
	//printf("%d\n",n);
	return fibHesapla(n-1)+fibHesapla(n-2);
	
}

int main()
{
	int n=5;
	int s=fibHesapla(n);
	int i=0;
 
	
	for(i=0;i<n;i++)
	{
		printf("%d->%d\n",(i+1),fibHesapla(i));
	}
}
