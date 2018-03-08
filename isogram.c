#include<stdio.h>
#include<string.h>

int main() {
   char t[50];
   int i,flag=0;
   scanf("%s",&t);
   for(i=0;t[i]!='\0';i++)
   {
           if(t[i]==t[i+1])
           {
               flag++;
           }
       }
   if(flag!=0)
   {
   printf("no");
   }
   else
   {
   printf("yes");
   }
       return 0;
}
