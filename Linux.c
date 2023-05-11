#include<stdio.h>

long long x ;
int bons1,bons2,bons4,bons6,bons10,ans;
int main()
{
    bons1 = 100000 * 0.1;
    bons2 = bons1 + 100000 * 0.075;
    bons4 = bons2 + 200000 * 0.05;
    bons6 = bons4 + 200000 * 0.03;
    bons10 = bons6 + 400000 * 0.015;

    scanf("%lld",&x);
    if(x <= 100000)
        ans = x * 0.1;
    else if (x <= 200000)
        ans = bons1 + (x - 100000) * 0.075;
    else if (x <= 400000)
        ans = bons2 + (x - 200000) * 0.05;
    else if (x <= 600000)
        ans = bons4 + (x - 200000) * 0.03;
    else if (x <= 1000000)
        ans = bons6 + (x - 600000) * 0.015;
    else ans = bons10 + (x - 1000000) * 0.01;
    printf("%d",ans);
}