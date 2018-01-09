#include<stdio.h>
int main(void)
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b)
(a>c)?printf("\n%d",a):printf("\n%d",c);
else
(b>c)?printf("\n%d",b):printf("\n%d",c);
return 0;
}
