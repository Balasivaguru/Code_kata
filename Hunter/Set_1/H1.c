#include<stdio.h>
int main(void)
{	
	int i,j,k,n,m;
	scanf("%d",&n);
	m=n;
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d ",a[j]);
				for(k=j+1;k<n;k++)	
				a[k-1]=a[k];
				n--;
				j--;
				
			}
				
		}
	}
	if(m==n)
	printf("unique");
}
