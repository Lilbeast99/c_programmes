#include<stdio.h>
#include<stdlib.h>

double sum(double num1,double num2)
{
    printf("Answer is %.2f",num1+num2);
}
double subtraction(double num1,double num2)
{
    printf("Answer is %.2f",num1-num2);
}
double multiplication(double num1,double num2)
{
    printf("Answer is %.2f",num1*num2);
}
double division(double num1,double num2)
{
    printf("Answer is %.2f",(float)num1/(float)num2);
}
int main()
{
    double num1,num2;
    int choice;
    printf("This is a digital calculator 2.0 still in the works LOL\n");
    printf("Enter a number: ");
    scanf("%lf",&num1);
    printf("Enter another number: ");
    scanf("%lf",&num2);
    printf("Okay which operation would you like to perfom?\n");
    printf("1.Addition(+)\n");
    printf("2.Subtraction(-)\n");
    printf("3.Multiplication(*)\n");
    printf("4.Division(/)\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            sum(num1,num2);
            break;

        case 2:
            subtraction(num1,num2);
            break;

        case 3:
            multiplication(num1,num2);
            break;

        case 4:
            division(num1,num2);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
