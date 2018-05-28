#include<stdio.h>
int main(void)
{	
	int i,n,c=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
		printf("%d ",a[i]);
		c++;
		}
	}
	if(c==0)
	printf("-1");
}
