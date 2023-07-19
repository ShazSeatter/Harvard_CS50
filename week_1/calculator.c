#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // Addition
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", x + y);

    // long and floats (type casting)

    long a = get_long("a: ");
    long b = get_long("b: ");

    float c = (float) a / (float) b;
    printf("%.20f\n", c);

    // double
    long d = get_long("d: ");
    long e = get_long("e: ");

    double f  = (double) d / (double) e;
    printf("%.20f\n", f);
}