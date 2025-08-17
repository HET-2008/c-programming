#include<stdio.h>
int main()
{
float a,b,c,d;
printf("enter principal amount , rate of interest , number of years:");
scanf("%f %f %f",&a,&b,&c);
d=a*b*c/100;
printf("interest=%f\n",d);
return 0;
}


