#include <stdio.h>

int main(void) {
	int count=0,j;
	char b[50];
	scanf("%[^\n]s",b);
	for(j=0;b[j]!='\0';j++)
	{
		if(b[j]==' ')
		count++;
	}
	printf("%d",count);
	return 0;
}
