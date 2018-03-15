#include<stdio.h>
#include<string.h>
int main() {
    char t[20],k[20];
    int m;
    scanf("%s",&t);
    k=strrev(t);
    if(t==k)
    printf("yes");
    else
    printf("no");
    return 0;
   
}
