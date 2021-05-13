#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int plus(int a,int b,int c);
int minus(int a,int b,int c);


int main()
{
    int a,b,c;
    printf("  Quadratic equations calculator\n");
    printf(" --------------------------------\n");
    putchar('\n');
    printf("Kindly Enter the values of a,b,c in the form ax(sqrd)+bx+c=0\n");
    printf(" a: ");
    scanf("%d",&a);
    printf(" b: ");
    scanf("%d",&b);
    printf(" c: ");
    scanf("%d",&c);
    putchar('\n');
    printf(" %dx(sqrd)+%dx+%d=0\n",a,b,c);
    putchar('\n');
    printf("First value of x is %d\n",plus(a,b,c));
    putchar('\n');
    printf("Second value of x is %d\n",minus(a,b,c));
    return 0;
}
int plus(int a,int b,int c)
{
    int x,y,z,i;
    i=((b*b)-(4*a*c));
    y=sqrt(i);
    z=-b+y;
    x=z/(2*a);

    return x;
}
int minus(int a,int b,int c)
{
    int x,y,z,i;
    i=((b*b)-(4*a*c));
    y=sqrt(i);
    z=-b-y;
    x=z/(2*a);

    return x;

}
