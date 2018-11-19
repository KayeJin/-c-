#include<stdio.h>

int main()
{
    int n,g,s,c;
    int gsum=0,ssum=0,csum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d %d",&g,&s,&c);
        gsum=gsum+g;
        ssum=ssum+s;
        csum=csum+c;
    }
    printf("%d %d %d %d",gsum,ssum,csum,gsum+ssum+csum);
    return 0;
}
