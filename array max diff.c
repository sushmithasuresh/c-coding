#include<stdio.h>
main()
{
	int a[10],b=0,n=0,c=0,s=0,i;
	 printf("entr n");
	 scanf("%d",&n);
	 
	 for(i=0;i<n;i++)
	 {
	 	printf("entr the %d element",i+1);
	 	scanf("%d",&a[i]);
	 }
	  
	  b=a[0]-a[1];
	  for(i=0;i<n;i++)
{
	c=a[i]-a[i+1];
	if(b<c)
	{
		b=c;
		s=i;
	}
}

printf("maximum difference and the index position %d %d %d",b,s+1,s+2);
}
