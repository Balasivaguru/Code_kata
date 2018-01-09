#include<stdio.h>
int main(void)
{
int n,i,k,s=1;
scanf("%d%d",&n,&k);
for(i=0;i<k;i++)
s*=n;
printf("\n%d",s);
return 0;
}
