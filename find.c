#include<stdio.h>
#include <string.h>
 
int main()
{
    char s[1000],c1,c2;  
    int  i;
    gets(s);
    c1=getchar();
    getchar();
    printf("%c",c1);
    c2=getchar();
    printf("%c",s);
   
    for(i=0;s[i];i++)
  {  
    if(s[i]==c1)
    {
       s[i]=c2;
   
      }
 
  }
     
    printf("%s",s);
   
     
    return 0;
}
