#include<stdio.h>
int main()
{
 float a,b;
 printf("enter  first number:");
 scanf("%f",&a);
 printf("enter second number:");
 scanf("%f",&b);

 a=a+b;
 b=a-b;
 a=a-b;

 printf("after swap \n first number is %f\n second number is %f\n",a,b);
 return 0;
}
