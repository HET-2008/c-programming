#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
void add (int,int);
printf("\n Enter x\n");
scanf("%d",&a);
printf("\n enter y\n");
scanf("%d",&b);
add(a,b);
}

void add(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("\nafter swap\n x=%d\n y=%d\n",x,y);
}
