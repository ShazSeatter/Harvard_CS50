#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct 
{
    // encapsulates everything it needs to be a person 
    string name;
    string number;

}
person;

int main(void) 
{
    // making a person "data type"
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-234-456-1000";

    people[1].name = "David";
    people[1].number = "+1-234-518-2000";

    string name = get_string("Name: ");

    for (int i = 0; i < 2; i++) 
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}