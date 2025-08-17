#include<stdio.h>
int main()
{
float a,b;
printf("enter 2 number:"),
scanf("%f %f",&a,&b);
if(a>b)
{printf("%f is bigger than %f\n",a,b);
printf("%f is smaller than %f\n",b,a);}
else
{printf("%f is bigger than %f\n",b,a);
printf("%f is smaller than %f\n",a,b);}
return 0;
}
