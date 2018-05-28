#include<stdio.h>
#include<math.h>
int main(void)
{	
	int i,j,n,temp,sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}		
		}
		sum+=a[i]*pow(10,i);
	}
	printf("%d",sum);
}
