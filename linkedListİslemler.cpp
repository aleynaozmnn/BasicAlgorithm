#include<stdio.h>
#include<stdlib.h> 
typedef struct Node{
	int data;
	struct Node* next;
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
int main()
{
	node* ilkEleman=NULL;
	int sayi;
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
	 
	return 0;
}
