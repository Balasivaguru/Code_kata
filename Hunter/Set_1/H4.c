#include<stdio.h>
int main(void)
{	
	int i,j,n,k,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{ 
		temp=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j+1;k<n;k++)	
				a[k-1]=a[k];
				n--;
				j--;
				temp++;	
			}
		}
		if(temp==0)
		printf("%d ",a[i]);			
	}
}
