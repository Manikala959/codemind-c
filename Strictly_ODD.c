#include<stdio.h>
int main()
{
    int n,f;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0&i%2==0)
        {
            f=1;
        }
    }
    if(f==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}