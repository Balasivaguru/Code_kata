#include<stdio.h>
int main(void)
{
int n,i,f=1;
scanf("%d%d",&n);
for(i=1;i<=n;i++)
f*=i;
printf("\n%d",f);
return 0;
}
