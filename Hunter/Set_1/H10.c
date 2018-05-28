#include<stdio.h>
int main(void)
{	
	int i,j,n,m,c=0;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			c++;
		}
	}
	if(c==m)
	printf("Yes");
	else
	printf("No");
}
