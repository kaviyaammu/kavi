#include <stdio.h>
#include<math.h>

int main(void) {
	int t,t1,t2,m;
	long int t3;
	scanf("%d%d%lf",&t,&t1,&t3);
	t2=pow(t,t1);
	m=t2%t3;
	printf("%d",m);
	
	return 0;
}
