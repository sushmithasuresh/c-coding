#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char check;
scanf("%c",&check);
if(isdigit(check))
{
printf("\nnumber");
}
  else
	{	
  	printf("\ncharacter");
	}

}
