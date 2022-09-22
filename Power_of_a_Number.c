#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,p,d;
    scanf("%d %d %d",&a,&b,&c);
    p=pow(a,b);
    d=p%c;
    printf("%d",d);
}