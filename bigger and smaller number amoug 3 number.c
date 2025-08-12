#include<stdio.h>
int main()
{
    int g;
    float n;
    printf("enter gross salary");
    scanf("%d",&g);
    if (g>10000)
    n=g+(g*0.1)-(g*0.03);
    else if(g<10000 && g>5000)
        n=g+(g*0.07)-(g*0.02);
    else n=g;
    printf("net salary=%f",n);
}
