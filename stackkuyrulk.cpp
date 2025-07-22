void stackekele(int sayi)
{
	if(ust<boyut-1)
	{
		ust++;
		yigin[ust]=sayi;
	}
}
void kuyrugaekle(int sayi)
{
	if(son<Boyut-1)
	{
		kuyruk[son]=sayi;
		son++;
	}
}
vois stacklistele()
{
	for(int i=ust;i>=0;i--)
	{
		printf("%d"yigin[i]);
		
	}
}
void kuyrukListele( int sayi)
{
	for(int i=bas;i<son;i++)
	{
		printf(kuyruk[i]);
	}
	
}
void stacktesil(int sayi)
{
    int kontrol=0;
    for(int i=ust;i>=0;i--)
    {
    	if(yigin[i]==sayi)
    	{
    		for(int j=i;j<son;j++)
    		{
    			yigin[j]=yigin[j+1];
    			
			}
			ust--;
			kontrol=1;
		}
	}
}
