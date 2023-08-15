#include <cs50.h>
#include <stdio.h>

bool valid_triangle(int a, int b, int c);

int main(void) 
{
    
    // ask user for input - input needs to be positive number
    int x;
    do
    {
        x = get_int("Side 1: ");
    } 
    while (x < 1);

    int y;
    do
    {
        y = get_int("Side 2: ");
    } 
    while (y < 1);

    int z;
    do
    {
        z = get_int("Side 3: ");
    } 
    while (z < 1);

    bool triangle = valid_triangle(x, y, z);

     printf("%d\n", triangle);
}

bool valid_triangle(int x, int y, int z)
{
    int sum_sides = x + y;
    if (sum_sides < z) 
    {
        return false;
    }
    return true;
}