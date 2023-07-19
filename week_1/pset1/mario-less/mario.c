#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // prompt user for input
    // check if height is less than 1 or greater than 8(or not an integer at all), go back 1 step
    int height;
    do
    {
        height = get_int("Height: ");
    } while (height < 1 || height > 8);
   
    printf("Stored: %i\n", height);

    for(int row = 0; row < height; row++)
    {
        for (int dot = height - row - 1; dot > 0; dot--) // starting on row 0, need to subtract 1 to get 6 dots
        {
           printf(" ");
        }
        // not starting on a new line 
        for (int hash = 0; hash < row; hash++) // hash should increase as it prints down, row starts at 0 so 0 < 0, false, next line of code, 0 < 1, true, print 1, then loop again because its true 
        {
            printf("#");
        }
        
        printf("\n");
    }
   
}