#include<stdio.h>
int main()
{
float a,b,c,d;
printf("enter gross salary:"),
scanf("%f",&a);
if(a>10000)
{b=a+0.1*a-0.03*a;
printf("net salary= %f\n",b);}
else if(a<=10000 && a>5000)
{c=a+0.07*a-0.02*a;
printf("net salary=%f\n",c);}
else
{d=a;
printf("net salary=%f\n",d);}

return 0;
}
