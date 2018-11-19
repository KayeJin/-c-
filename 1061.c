#include<stdio.h>

int main()
{
    int n,sum=0,integer;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&integer);
        sum=sum+integer;
    } 
    printf("%d %.5lf",sum,(sum*1.0)/n);
    return 0;
}
