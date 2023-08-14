#include <cs50.h>
#include <stdio.h>

// main returns 0 by default 

int main (int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    } 
    else
    {
        printf("hello, world\n");
    }
}