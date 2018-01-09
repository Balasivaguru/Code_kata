#include<stdio.h>
int main(void)
{
int n;
scanf("%d",&n);
((n%4==0)||(n%400==0))?printf("\nyes"):printf("\nno");
return 0;
}
