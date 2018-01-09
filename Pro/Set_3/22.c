#include <stdio.h>
int main(void) 
{
	int a[10],i,max;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	max=a[0]+a[1];
	for(i=2;i<5;i++)
	{
	if(max<(a[i]+a[i-1]))
	max=a[i]+a[i-1];
	}
	printf("%d",max);
	return 0;
}
