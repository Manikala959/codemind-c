#include<stdio.h>
int main()
{
    int n,s,sum=0,r;
    scanf("%d",&n);
    s=n*n;
    while(s>0)
    {
        r=s%10;
        sum+=r;
        s=s/10;
        
    }
    if(sum==n)
    {
        printf("Neon Number");
        
    }
    else
    {
        printf("Not Neon Number");
    }
}