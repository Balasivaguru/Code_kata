#include<stdio.h>
int main(void)
{	
	int i,j,n,k,temp;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<k;j++)
	{
	temp=a[0];
	for(i=1;i<n;i++)
	a[i-1]=a[i];
	a[n-1]=temp;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
