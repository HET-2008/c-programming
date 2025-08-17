#include<stdio.h>
int main()
{
float a,b,c,d,e;
printf("enter marks of maths , physics and chemistry :");
scanf("%f %f %f",&a,&b,&c);
d=a+b+c;
printf("subject total is =%f",d);
e=(a+b+c)/3;
printf("average of three subjects =%f",e);
return 0;
}
