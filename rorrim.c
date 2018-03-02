#include <stdio.h>

int main(void) {
	int t[40],k[40],x,y,m,flat=0;
	scanf("%d",&m);
	for(x=0;x<m;x++)
	{
		scanf("%d",&t[x]);
	}
	for(y=0;y<m;y++)
	{
		scanf("%d",&k[y]);
	}
	for(x=0;x<m;x++)
	{
if(t[x]==k[m-x-1])
{
	flat++;
}
			
		}
	if(flat==m)
	printf("yes");
	else
	printf("no");
	return 0;
}
