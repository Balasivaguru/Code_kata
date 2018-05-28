#include<stdio.h>
int main(void)
{
	int n,ma,mi,i,j,min,max;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(min>=a[i])
			{
				min=a[i];
				mi=i+1;
			}
			if(max<=a[i])
			{
				max=a[i];
				ma=i+1;
			}
		}
	}
		printf("%d %d",mi,ma);
}
