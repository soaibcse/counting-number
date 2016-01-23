#include<stdio.h>
int main()
{
	int n,num,i,pos=0,neg=0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{scanf("%d",&num);
if(num>=0)
pos=pos+1;
else
neg=neg+1;}
printf("%d %d",pos,neg);		
return 0;	
}

