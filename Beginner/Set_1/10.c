#include<stdio.h>
int main(void)
{
int n,i=1;
scanf("%d",&n);
while(n/10!=0)
{
n/=10;
i++;
}
printf("%d",i);
return 0;
}
