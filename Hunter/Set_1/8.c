#include <stdio.h>
int main(void) 
{
	int a[10],i,j,k;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(k=0;k<5;k++)
	for(j=0;j<k;j++)
	for(i=0;i<j;i++)
	if(a[k]==a[j]+a[i])
	printf("\n%d %d %d",a[i],a[j],a[k]);
	return 0;
}
