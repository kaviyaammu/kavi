#include<stdio.h>

int main() {
   int t,k,m,i=1;
   scanf("%d",&t);
   while(t!=0)
   {
       m=t%10;
       i=i*m;
       t=t/10;
       }
       printf("%d",i);
       return 0;
}
