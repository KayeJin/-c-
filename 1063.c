#include<stdio.h>

int main()
{
    int n,max,min,num;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(i==1)
        {
            min=num;
            max=num;
        }
        if(num>max)max=num;
        if(num<min)min=num;
    }
    printf("%d",max-min);
    return 0;
}
