#include<stdio.h>
long int lcm(long int a,long int b)
{
    long int i,m=a;
    if(b>a)
    {
        m=b;
    }
    i=m;
    while(1)
    {
        if(i%a==0 && i%b==0)
        {
            return i;
        }
        else
        {
            i+=m;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    long int l;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=lcm(a[0],a[1]);
    for(i=2;i<n;i++)
    {
        l=lcm(l,a[i]);
    }
    printf("%ld",l);
}

