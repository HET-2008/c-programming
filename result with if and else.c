#include<stdio.h>
int main()
{
float a,b,c,d;
printf("enter marks of maths , physics and chemistery:");
scanf("%f %f %f",&a,&b,&c);
d=(a+b+c)/3;
printf("average of maths , physics and chmeistery%f\n",d);
if (a<35 || b<35 || c<35)
{printf("student is fail");}
else
{if (d >= 70)
{printf("distinction:");}
else if (d < 70 && d >= 60)
{printf("first:");}
else if (d < 60 && d >= 50)
{printf("second:");}
if (d < 50 && d >= 35)
{printf("third:");}}
return 0;
}
