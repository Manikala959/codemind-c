#include<stdio.h>
int main()
{
    int p,si;
    float t,r;
    scanf("%d %f %f",&p,&t,&r);
    si=p*t*r/100;
    printf("%d",si);
    return 0;
}