#include<stdio.h>
float main()
{
    float a;
    float b;

    printf("enter the value of first number:");
    scanf("\n %f",&a);
    printf("enter the value of second number:");
    scanf("\n %f",&b);

    printf("%f \n the sumation of both numbers is:", a+b);
    printf("%f \n the substraction of both numbers is:", a-b);
    printf("%f \n the multiplicaton of both numbers is:", a*b);
    printf("%f \n the division of both numbers is:", a/b);

    int c = a;
    int d = b;

    int e = c%d;
    printf("%d \n the modulus of both numbers is:", e);

    return 0.0;
}
