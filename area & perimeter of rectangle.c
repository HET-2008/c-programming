#include<stdio.h>
int main()
{
float a,b,c,d;
printf("enter a breadth and width of rectangle :");
scanf("%f %f",&a,&b);
d=a*b;
printf("area of rectangle is = %f\n",d);
c=2*(a+b);
printf("perimeter of rectangle is = %f\n",c);
return 0;
}
