#include <stdio.h>

int main(void) {
	int a,b,c,i;
	scanf("%d%d",&a,&b);
	c=1;
	for(i=1;i<=a;i++)
	{
		c=c*b;
		
	}
	printf("%d",c);
	return 0;
}
