#include<stdio.h>

int main()
{
    int n,max=0,grade;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&grade);
        if(grade>max)
        {
            max = grade;
        }
    }
    printf("%d",max);
    return 0;

}
