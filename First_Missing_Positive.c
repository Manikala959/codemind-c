#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=0,f=0,k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=1;i<=max;i++)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==i)
            {
                f=1;
                break;
            }
            
        }
        if(f==0)
        {
            k=i;
            break;
        }
    }
    if(k!=0)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d",max+1);
    }
}
