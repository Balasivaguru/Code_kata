#include<stdio.h>
int main(void)
{	
	int i,j,k,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)	
			{
				if(a[i]+a[j]==a[k])
				printf("%d %d %d\n",a[i],a[j],a[k]);
			}		
		}
	}
}
