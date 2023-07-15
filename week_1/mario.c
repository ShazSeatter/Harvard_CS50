#include <stdio.h>
#include <cs50.h>


int main(void)
{
    const int counter = 4; // const makes the code less vulnerable for unexpected change. better design 

    for (int i = 0; i < counter; i++)
    {
        for (int j = 0; j < counter; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}