#include <stdio.h>

int main(void) {
int a[10],i,j,t,flag;
flag=0;
scanf("%d",&t);
for(i=0;i<t;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<t;i++)
{
	for(j=i+1;j<t;j++)
{
	if(a[i]>a[j])
	{
		flag=a[i];
		a[i]=a[j];
		a[j]=flag;
		
	}
}
}
printf("%d\t%d",a[0],a[t-1]);
	return 0;
}
