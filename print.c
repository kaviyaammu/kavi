#include <stdio.h>

int main(void)
{
	int t,k,i,a[10];
	scanf("%d%d",&k,&t);
	for(i=0;i<k;i++)
	scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	{
	if(a[i]==t)
	printf("yes");
	}
	return 0;
}
