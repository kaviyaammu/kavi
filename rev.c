    #include <stdio.h>
 
    int main(void)
    {
    	int a,b,c,d;
    	scanf("%d",&a);
    	b=a;
    while(b!=0)
    {
    	c=b%10;
    	d=d*10+c;
    	a=a/10;
 
    }
    printf("%d",d);
 
    	return 0;
    }
