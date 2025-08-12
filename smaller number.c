#include<stdio.h>
int main()
{
    int a,b;
printf("enter 2 numbers");
scanf("%d%d",&a,&b);
if(a<b)
    printf("a=%d is smaller than b=%d",a,b);
else
    printf("b=%d is smaller than a=%d ",b,a);
return 0;
}
