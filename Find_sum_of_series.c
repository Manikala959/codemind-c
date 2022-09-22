#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    float s=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s+pow(i,-1);
    }
    printf("%.2f",s);
}