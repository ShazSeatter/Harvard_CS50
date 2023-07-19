#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents); // intergar no decimals rounding down
    cents = cents - quarters * 25; // 37 - ( 1 * 25) = 37- 25 = 12
    printf("cents: %d\n", cents); // 12 for reassigned value of cents for next function call 

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
    printf("Quarters: %d\n", quarters);
    printf("Dimes: %d\n", dimes);
    printf("Nickels: %d\n", nickels);
    printf("Pennies: %d\n", pennies);

}

int get_cents(void)
{
    // TODO
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    } while (cents < 0);
    
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO
    int quarters = cents / 25; // 37 / 25 = 1.48 0.48 * .25 = 12 (new cents value for next function) need to * by 0.25 to get currency values. 100 cents in 1 dollar. 
    printf("quarters: %i", quarters); // 1 
    return quarters;
    
}

int calculate_dimes(int cents)
{
    // TODO
    int dimes = cents / 10;
    return dimes;
}

int calculate_nickels(int cents)
{
    // TODO
    int nickels = cents / 5;
    return nickels;
}

int calculate_pennies(int cents)
{
    // TODO
    int pennies = cents; 
    return pennies;
}
