#include <stdio.h>
#include <cs50.h>


int main (void) 
{
    // Get length from user
    int length;
    do
    {
        length = get_int("Length: ");
    } 
    while (length < 1);

    // Declare array - make space for it in memory
    int array[length];

    // Set the first value 
    array[0] = 1;
    printf("%i\n", array[0]);

    for (int i = 1; i < length; i++)
    {
        // Make current element twice the previous 
        array[i] = 2 * array[i - 1];
        // Print the current element 
        printf("%i\n", array[i]);
    }

}
