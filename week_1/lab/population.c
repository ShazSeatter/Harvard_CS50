#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompting the user for a starting # of llamas
    int start;
    do
    {
        start = get_int("Start size: ");
    } while (start < 9);

    // Prompting them for an ending # of llamas
    int end;
    do
    {
        end = get_int("End size: ");
    } while (end < start);
    
    
    // How many years will it take to get to the goal? 
    int years = 0;
    while (start < end)
    {
       start += start / 3; 
       start += start / 4;
       years++;
    }
    
    printf("Years: %i\n", years);


    // Every year, 1/3 of current llamas are born; 1/4 pass away


}