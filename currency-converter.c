/*
Robert B Johnson
CSE-130-50-4262
currency-converter.c
03/14/2024
A program that converts an amount from dollars to 6 other currencies based on user input.

TODO:
Because of the large numbers when converting to rupees and yen
the columns break down if the base amount is more than 5 digits.
I don't really have a clear solution for that other than limiting imput size
or converting to scientific notation / rounding to the millions/billions/etc and adding a suffix.
*/

#include <stdio.h>

void print_table_header() 
{
    char currency_name[7][6] = {"USD", "Euros", "Rupee", "Yen", "AD", "CD", "Swiss"};
    printf("%-6s | %-12s | %-12s | %-12s | %-12s | %-12s | %-12s | %-12s\n", 
           "", currency_name[0], currency_name[1], currency_name[2], 
           currency_name[3], currency_name[4], currency_name[5], currency_name[6]);
    printf("---------------------------------------------------------------------------------------------------------------\n");
}

void print_conversion_row(const char* currency_name, float usd, float eur, float ind, 
       float jpy, float aud, float cad, float chf) 
{
    printf("%-6s | %-12.3f | %-12.3f | %-12.3f | %-12.3f | %-12.3f | %-12.3f | %-12.3f\n",
           currency_name, usd, eur, ind, jpy, aud, cad, chf);
    printf("---------------------------------------------------------------------------------------------------------------\n");
}

void printTable(float base_amount) {
    // Exchange rates from USD
    const float USD_EUR_RATE = 0.86;   // Euro
    const float USD_IND_RATE = 90.90;   // Indian Ruppee
    const float USD_JPY_RATE = 158.10;  // Japanese Yen
    const float USD_AUD_RATE = 1.49;   // Australian Dollar
    const float USD_CAD_RATE = 1.39;   // Canadian Dollar
    const float USD_CHF_RATE = 0.80;   // Swiss Franc
    
    // Calculate each conversion and print the table

    // Calculate conversions from USD
    float dollars = base_amount;
    float eur = base_amount * USD_EUR_RATE;
    float ind = base_amount * USD_IND_RATE;
    float jpy = base_amount * USD_JPY_RATE;
    float aud = base_amount * USD_AUD_RATE;
    float cad = base_amount * USD_CAD_RATE;
    float chf = base_amount * USD_CHF_RATE;

    // Print table with tabs
    print_table_header();

    //Print row for USD
    print_conversion_row("USD", dollars, eur, ind, jpy, aud, cad, chf);
    
    // Calculate conversions from EUR
    dollars = base_amount / USD_EUR_RATE;
    eur = base_amount;
    ind = dollars * USD_IND_RATE;
    jpy = dollars * USD_JPY_RATE;
    aud = dollars * USD_AUD_RATE;
    cad = dollars * USD_CAD_RATE;
    chf = dollars * USD_CHF_RATE;

    //Print row for Euro
    print_conversion_row("Euro", dollars, eur, ind, jpy, aud, cad, chf);

    // Calculate conversions from INR
    dollars = base_amount / USD_IND_RATE;
    eur = dollars * USD_EUR_RATE;
    ind = base_amount;
    jpy = dollars * USD_JPY_RATE;
    aud = dollars * USD_AUD_RATE;
    cad = dollars * USD_CAD_RATE;
    chf = dollars * USD_CHF_RATE;

    //Print row for INR
    print_conversion_row("Rupee", dollars, eur, ind, jpy, aud, cad, chf);
    
    // Calculate conversions from JPY
    dollars = base_amount / USD_JPY_RATE;
    eur = dollars * USD_EUR_RATE;
    ind = dollars * USD_IND_RATE;
    jpy = base_amount;
    aud = dollars * USD_AUD_RATE;
    cad = dollars * USD_CAD_RATE;
    chf = dollars * USD_CHF_RATE;

    //Print row for JPY
    print_conversion_row("Yen", dollars, eur, ind, jpy, aud, cad, chf);
    
    // Calculate conversions from AUD
    dollars = base_amount / USD_AUD_RATE;
    eur = dollars * USD_EUR_RATE;
    ind = dollars * USD_IND_RATE;
    jpy = dollars * USD_JPY_RATE;
    aud = base_amount;
    cad = dollars * USD_CAD_RATE;
    chf = dollars * USD_CHF_RATE;

    //Print row for AUD
    print_conversion_row("AUD", dollars, eur, ind, jpy, aud, cad, chf);

    // Calculate conversions from CAD
    dollars = base_amount / USD_CAD_RATE;
    eur = dollars * USD_EUR_RATE;
    ind = dollars * USD_IND_RATE;
    jpy = dollars * USD_JPY_RATE;
    aud = dollars * USD_AUD_RATE;
    cad = base_amount;
    chf = dollars * USD_CHF_RATE;

    //Print row for CAD
    print_conversion_row("CAD", dollars, eur, ind, jpy, aud, cad, chf);

    // Calculate conversions from CHF
    dollars = base_amount / USD_CHF_RATE;
    eur = dollars * USD_EUR_RATE;
    ind = dollars * USD_IND_RATE;
    jpy = dollars * USD_JPY_RATE;
    aud = dollars * USD_AUD_RATE;
    cad = dollars * USD_CAD_RATE;
    chf = base_amount;

    //Print row for CHF
    print_conversion_row("Swiss", dollars, eur, ind, jpy, aud, cad, chf);

}


int main() {
    int notExit = 1;
    char user_choice_continue;
    do {
       // Get base amount from user
       float base_input;
       printf("Enter base amount: ");
       scanf("%f", &base_input);
       printf("\n");

       // Print conversion table
       printTable(base_input);
       printf("\n");

       // Ask user if they want to continue or exit
       printf("Would you like to convert another amount? (y/n): ");
       scanf(" %c", &user_choice_continue);
       if (user_choice_continue == 'n' || user_choice_continue == 'N') {
           notExit = 0;
       }
       printf("\n");
    } while (notExit);
    

    return 0;
}