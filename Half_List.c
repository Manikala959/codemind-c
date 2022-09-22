

#include<stdio.h>
int main()
{
    int n,arr[100],i=0,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=n/2;
    for(i=n-1;i>=j;i--)
    printf("%d ",arr[i]);
    for(i=0;i<j;i++)
    printf("%d ",arr[i]);
}