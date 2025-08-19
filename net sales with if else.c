#include<stdio.h>
int main()
{
float a,b,c,d;
printf("enter gross sales:"),
scanf("%f",&a);
if(a>20000)
{b=a-0.15*a;
printf("net sales= %f\n",b);}
else if(a<=20000 && a>10000)
{c=a-0.10*a;
printf("net sales=%f\n",c);}
else
{d=a-0.05*a;
printf("net sales=%f\n",d);}

return 0;
}
