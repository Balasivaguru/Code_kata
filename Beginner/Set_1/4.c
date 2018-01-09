#include<stdio.h>
int main(void)
{
char s;
scanf("%c",&s);
if((s>64&&s<91)||(s>96&&s<123))
printf("\nAlphabet");
else
printf("\nNo");
return 0;
}
