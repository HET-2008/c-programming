#include <stdio.h>
int main()
{
float a,b,c;
printf("enter first numbers :");
scanf("%f",&a);
printf("enter second number:");
scanf("%f",&b);
c=a;
a=b;
b=c;
printf("after swap the number \n first number is %f\n second number is %f\n",a,b);
return 0;
}
