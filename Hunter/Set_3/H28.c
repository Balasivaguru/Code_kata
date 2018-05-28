#include<stdio.h>
int main(void)
{	
	int i,j,k;
	char a[100];
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			{
				for(k=j+1;a[k]!='\0';k++)	
				a[k-1]=a[k];
				a[k-1]='\0';
				j--;	
			}		
		}
	}
	printf("%s",a);
}
