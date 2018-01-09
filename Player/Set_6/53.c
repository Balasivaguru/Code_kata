#include <stdio.h>

int main(void) {
	char s[100000];
	int i;
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++);
	printf("%d",i);
	return 0;
}
