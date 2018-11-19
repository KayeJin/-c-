#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    double sample,sum=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%lf",&sample);
        sum = sum+sample;
    }
    printf("%.4lf",sum/n);
    return 0;
}
