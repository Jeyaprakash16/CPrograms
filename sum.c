#include<stdio.h>
int main()
{
    int i,sum=0,n;
    
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("");
            sum=sum+i;
            if(sum>n)
            {
                printf("true");
                
                
            }
            else
            {
                printf("false");
            }
        }
    }
    return 0;
}