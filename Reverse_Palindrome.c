#include<stdio.h>
int func(int n)
{
    int r,rev=0;
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n,p;
    scanf("%d",&n);
    p=func(n);
    n+=p;
    while(1)
    {
        int p;
        p=func(n);
        if(p==n)
        {
            printf("%d",n);
            break;
        }
        n+=p;
    }
}