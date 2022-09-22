#include<stdio.h>
int rev(int n)
{
    int rv=0,r;
    while(n)
    {
        r=n%10;
        rv=rv*10+r;
        n=n/10;
    }
    return rv;
}
int main()
{
    int i,a,b;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i==rev(i))
        {
            printf("%d ",i);
        }
    }
}