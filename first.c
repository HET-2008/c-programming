#include<stdio.h>
void main()
{
int a,b,temp;
clrscr();
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);


temp =a;
a=b;
b=temp;

printf("after swapping:\n");
printf("first number = %d\n",a);
printf("second number = %d\n",b);
getch();


}
