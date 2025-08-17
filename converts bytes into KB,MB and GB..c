#include<stdio.h>
void main()
{
float a,b,c,d;
printf("enter bytes:");
scanf("%f",&a);
b=a/1024;
printf("KB=%f\n",b);
c=a/(1024*1024);
printf("MB=%f\n",c);
d=a/(1024*1024*1024);
printf("GB=%f\n",d);
}


