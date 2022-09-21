#include<stdio.h>
int main()
{
    int l,b,w,c,a,t;
    scanf("%d %d %d %d",&l,&b,&w,&c);
    a=(l+w+w)*(b+w+w)-(l*b);
    t=c*a;
    printf("%d",t);
    return 0;
}