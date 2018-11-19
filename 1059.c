#include<stdio.h>

int main()
{
    int num,age,sum=0;
    scanf("%d",&num);
    if(num<=0 || num>100)return 0;
    for(int i=1;i<=num;i++)
    {
        scanf("%d",&age);
        sum=sum+age;
    }
    double ave=(sum*1.0)/num;
    printf("%.2lf",ave);
    return 0;
}
