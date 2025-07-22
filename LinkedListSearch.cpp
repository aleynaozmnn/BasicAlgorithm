#include<stdio.h>
#include<stdlib.h> 

typedef struct Node{
	int data;
	struct Node *next;
}node;
void elemanEkle(node** ilk,int sayi)
{
     node* yeniDugum=(node*)malloc(sizeof(node));
     yeniDugum->data=sayi;
     yeniDugum->next=NULL;
     if(*ilk==NULL)
     {
     	*ilk=yeniDugum;
	 }
	 else
	 {
        node *temp=*ilk;
        while(temp->next!=NULL)
        {
        	temp=temp->next;
		}
		temp->next=yeniDugum;
	    
	 }
	
}
void yazdir(node *ilk)
{
	printf("Elemanlarin Olusturdugu Yeni Bagli Liste\n");
	while(ilk!=NULL)
	{
		printf("%d->",ilk->data);
		ilk=ilk->next;
	}
	printf("NULL\n");
}
int  aramaYap(node* ilk,int sayi)
{
	node* temp=ilk;
	while(temp!=NULL)
	{
		if(temp->data==sayi)
		{
			return 1;
		}
		temp=temp->next;
	}
	return 0;
	
}
void sayiSil(node** ilk,int sayi)
{
	node *temp=*ilk;
	if(temp!=NULL && temp->data==sayi)//ilk düðümse
	{
		*ilk=temp->next;
		free(temp);
		return;
	}
	node *iter=temp->next;
	while(iter!=NULL)
	{
		if(iter->data==sayi)
		{
			temp->next=iter->next;
			free(iter);
			return;
		}
		temp=temp->next;
		iter=temp->next;
	}
}

int main()
{
	node* ilkEleman=NULL;
	int sayi,aranan;
	while(1)
	{
		printf("Lutfen bir sayi giriniz:\n");
		printf("Cikmak icin -1 i tuslayiniz\n");
		scanf("%d",&sayi);
		if(sayi==-1) break;
		elemanEkle(&ilkEleman,sayi);
		yazdir(ilkEleman);
	}
	printf("\nSON DURUMDA LISTE\n");
	yazdir(ilkEleman);
	
	printf("Lutfen aramak istediginiz degeri giriniz:\n "); scanf("%d",&aranan);
	
	if(aramaYap(ilkEleman,aranan))
	{
		sayiSil(&ilkEleman,aranan);
		printf("\nYeni liste\n");
		yazdir(ilkEleman);
		
	}
	else
	{
		printf("Sayi mevcut listede bulunamadi!\n");
	}
	return 0;
	 
	
}
