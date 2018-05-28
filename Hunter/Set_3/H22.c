#include<stdio.h>
int main(void)
{
	int n,i,j,ans;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		ans=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			ans*=a[j];
		}
		printf("%d ",ans);
	}
}
