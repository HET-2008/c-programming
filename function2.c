#include<stdio.h>
#include<conio.h>
int main()
{
float c;
float add(void);
c=add();

printf("Answer = %f",c);
}
float add(void)
{
    float x,y,z;
    printf("\nenter 2 nos.");
    scanf("%f %f",&x,&y);
    z=x+y;
    return z;
}

