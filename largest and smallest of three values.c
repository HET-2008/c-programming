#include<stdio.h>
int main()
{
float a,b,c;
printf("enter 3 number:"),
scanf("%f %f %f",&a,&b,&c);
if(a>=b && a>=c)
{printf("largest number= %f\n",a);}
else if(b>=a && b>=c)
{printf("largest number =%f\n",b);}
else
{printf("largest nuber =%f\n",c);}

if(c<=a && c<=b)
{printf("smallest number= %f\n",c);}
else if (b<=a && b<=c)
{printf("smallest number= %f\n",b);}
else
{printf("smallest number= %f\n",a);}
return 0;
}
