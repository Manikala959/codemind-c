#include<stdio.h>
int main()
{
    int a[3],b[3],c=0,d=0,i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            c++;
        }
        else if(a[i]<b[i])
        {
            d++;
        }
    }
    printf("%d %d",c,d);
    return 0;
}