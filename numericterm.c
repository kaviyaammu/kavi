#include<stdio.h>
#include<string.h>
int main()
{
    char t[50];
    int x;
    scanf("%s",&t);
    for(x=0;t[x]!='\0';x++)
    {
        if(t[x]>='0' && t[x]<='9')
        {
            printf("%c",t[x]);
        }

    }
    return 0;
    
   
}
