#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int age = 30;
    double pi = 3.14;
    char backspaceChar = '\b';
    char agrade = 'A';
    char name[] = "Roman";

    printf(" -- Data types --\n");
    printf("Hello, %s!\n", name);
    printf("I am %d years old.\n", age);

    printf(" -- Floating point numbers --\n");
    printf(" Division of int by int returns int: %d\n", 10 / 3);
    printf(" Division of int by double returns double: %f\n", 10 / 3.0);
    
    printf(" -- Math operations --\n");
    printf("Power of 2^3: %f\n", pow(2.1, 3));
    printf("Square root of 9: %f\n", sqrt(9));

    printf("ceil(2.123) = %f\n", ceil(2.123));
    printf("floor(4.999) = %f\n", floor(4.999));

    printf(" -- Constants --\n");
    printf("PI = %f\n", M_PI);
    const double PI_MATH = 3.14159265358979323846;
    printf("PI = %f\n", PI_MATH);


    return 0;
}