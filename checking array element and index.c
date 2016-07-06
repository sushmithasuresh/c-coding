#include<stdio.h>
main()
{
	int a[10],n=4,s=0,i;
	for(i=0;i<n;i++)
	{
		printf("entr the %d element",i+1);
	 	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
		printf("\n%d",s);
	    }
		s++;
	}
}
