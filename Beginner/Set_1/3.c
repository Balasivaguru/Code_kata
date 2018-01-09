#include<stdio.h>
int main(void)
{
char s;
scanf("%c",&s);
if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
printf("\nvowel");
else
printf("\nconsonant");
return 0;
}
