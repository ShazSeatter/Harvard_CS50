#include <stdio.h> // print f
#include <cs50.h> // get string

int main(void) // when flag is clicked - run this code in scratch
{
    string name = get_string("What is your name? ");
    printf("hello, %s!\n", name);
}
