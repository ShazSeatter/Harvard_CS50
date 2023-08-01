#include <stdio.h>
#include <cs50.h>

float average(int array[]);

// arrays 
int main(void)
{

    // dynamic - index into its location 
    int scores[3];
    for(int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n",  average(scores));
}


float average(int array[]) 
{
    
}