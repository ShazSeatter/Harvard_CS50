#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[] = { "battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");
    
    for(int i = 0; i < 6; i++)
    {   
        // cannot use ==
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            // exit of out loop; to exit successfully 
            return 0;
        }
    }

    printf("Not found\n");
    return 1;

}

// int search of array 
/*int main(void) 
{
    int numbers[] = { 20, 500, 10 , 5, 100, 1, 50};


    int n = get_int("Number: ");

    for (int i = 0; i < 7; i++) 
    {
        if (numbers[i] == n) 
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
} */