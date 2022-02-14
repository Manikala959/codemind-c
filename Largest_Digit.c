#include<stdio.h>
int main()
{
    int num,rem,lar=0;
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        if(lar<rem)
        {
            lar=rem;
        }
        num=num/10;
    }
    printf("%d",lar);
    return 0;
}