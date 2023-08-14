#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? ");
    int age = get_int("Whats your age? ");
    string phone_number = get_string("What's your phonenumber? ");

    printf("my name is %s, and I'm %i years old, and my phone number is %s\n", name, age, phone_number);
}