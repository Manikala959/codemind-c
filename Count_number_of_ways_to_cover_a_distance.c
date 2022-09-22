#include<stdio.h>
int countways(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return countways(n-1)+countways(n-2)+countways(n-3);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",countways(n));
    return 0;
}