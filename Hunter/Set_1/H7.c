#include<stdio.h>
int main(void)
{	
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{ 
		if(i%2!=a[i]%2)
		printf("%d ",a[i]);			
	}
}
