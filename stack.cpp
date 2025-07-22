void stackeEkle(int ssayi)
{
      int yigin[boyut];
      int ust=-1;
      int sayi;
      char secim;
      do{
      	printf("Lutfen bir sayi giriniz"); scanf("%d",&sayi);
      	ust++;
      	yigin[ust]=sayi;
      	
      	printf("Devam etmek istiyor musunuz?\n");
      	 scanf(" %c",&secim);      	
	  }while(secim=='e' || secim=='E');
	  while(ust>=0)
	  {
	  	printf("%d\t",yigin[ust]);
	  	ust--;
	  	
	  }
}
void kuyrugaekle(int sayi)
{
	int kuyruk[boyut],bas=0,son=0;
	char secim;
	int sayi;
	 do{
      	printf("Lutfen bir sayi giriniz"); scanf("%d",&sayi);
      	kuyruk[son]=sayi;
      	son++;
      	
      	printf("Devam etmek istiyor musunuz?\n");
      	 scanf(" %c",&secim);      	
	  }while(secim=='e' || secim=='E');
	  while(bas<son)
	  {
	  	printf("%d\t",kuyruk[bas]);
	  	bas++;
	  	
	  }
	
}

void stackeEkle(int sayi)
{
	if(ust<Boyut-1)
	{
		ust++;
		yigin[ust]=sayi;
		 
	}
}
void kuyrugaEkle(int sayi)
{
	if(son<Boyut-1)
	{
		kuyruk[son]=sayi;
		son++;
	}
}
void stackListele()
{
	for(int i=ust;i>=0;i--)
	{
		printf("%d\t",yigin[i]);
	}

}
void kuyrukListele(int sayi)
{
	for(int i=bas;i<son;i++)
	{
		printf("%d\t",kuruk[i])
	}
}
void stacksil()
{
	int kontrol=0;
	for(int i=uts;i>=0;i--)
	{
		if(yigin[i]==sayi)
		{
			for(int j=i;j<ust;j++)
			{
				yigin[j]=yigin[j+1];
			}
			ust--;
			kontrol=1;
		}
	}
}
void kuyruksil(int sayi)
{
	int kontrol=0;
    for(int i=bas;i<son-1;i++)
    {
    	if(kuyruk[i]==sayi)
    	{
    		for(int j=i;j<son;j++)
    		{
    			kuyruk[j]=kuyruk[j+1];
    			
			}
			son--;
			kontrol=1;
			break;
			
		}
	}
}
