#include<stdio.h>
int main(void)
{
int a[100],n,i,sum=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<k;i++)
sum+=a[i];
printf("\n%d",sum);
return 0;
}
