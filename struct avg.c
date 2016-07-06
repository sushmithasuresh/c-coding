#include<stdio.h>
	struct stdu
	{
		char name[10];
		int m1,m2,m3;
		int tot;
		float avg;
	};
	
main()
{ int i=0,n=4,k=0;
float big;
struct stdu s[5];
for(i=0;i<n;i++)
{
	printf("entr the %d st student details",i+1);
	scanf("%s %d %d %d",s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
}

for(i=0;i<n;i++)
{
	s[i].tot=s[i].m1+s[i].m2+s[i].m3;
	s[i].avg=(float)s[i].tot/3;
}
 
 big=s[0].avg;
 for(i=0;i<n;i++)
 {
 	if(big<=s[i].avg)
 	{
 	big=s[i].avg;
   k=i;
    }
 	
 }
 printf("1st rank person and his/her avg is : %s %f",s[k].name,big);


	
}
