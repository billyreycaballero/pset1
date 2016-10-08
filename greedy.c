#include <stdio.h>
#include <cs50.h>
#include <math.h>


int owe(int c);

int main(void)
{
    float change;    
    
    do
    {
    printf("How much change is owed? ");
    change = GetFloat();
    }
    while (change < 0.0);
    
    int changeToInt = (int)(round(change * 100));
    
    owe(changeToInt);
}

int owe(int c)
{
    int quarter, dime, nickel, penny;
    
        quarter = c/25;
        dime = (c%25)/10;
        nickel = ((c%25)%10)/5;
        penny = (((c%25)%10)%5)/1;
    
    printf("%i\n", quarter + dime + nickel + penny);
    
    return 0;
}
