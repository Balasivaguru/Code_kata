#include<stdio.h>
int main(void)
{
	int n,a,b,c,d,e,f;
	scanf("%d",&n);
	a=n%1000;
	b=a%500;
	c=b%100;
	d=c%50;
	e=d%10;
	f=e%1;
    printf("%d",(n/1000)+(a/500)+(b/100)+(c/50)+(d/10)+(e/1));
}

