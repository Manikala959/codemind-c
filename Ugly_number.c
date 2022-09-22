#include<stdio.h>
int ugly_n(int n)
{
    if(n==1)
    return 1;
    if(n<=0)
    return 0;
    if(n%2==0)
    return ugly_n(n/2);
    if(n%3==0)
    return ugly_n(n/3);
    if(n%5==0)
    return ugly_n(n/5);
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(ugly_n(n))
    {
        printf("Ugly Number");
    }
    else
    {
         printf("Not Ugly Number");
    }
}
