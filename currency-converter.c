/*
Robert B Johnson
CSE-130-50-4262
currency-converter.c
03/14/2024
A program that converts an amount from dollars to 6 other currencies based on user input.

Could probably have completed this with fewer constants by calculating the other rates 
relative to USD rates but decided to hardcode all rates.
*/

#include <stdio.h>

int main() {
    // Exchange rates from USD
    const float USD_EUR_RATE = 0.86;   // Euro
    const float USD_IND_RATE = 90.90;   // Indian Ruppee
    const float USD_JPY_RATE = 158.10;  // Japanese Yen
    const float USD_AUD_RATE = 1.49;   // Australian Dollar
    const float USD_CAD_RATE = 1.39;   // Canadian Dollar
    const float USD_CHF_RATE = 0.80;   // Swiss Franc

    // Exchange rates from EUR
    const float EUR_USD_RATE = 1.16;   // US Dollar
    const float EUR_IND_RATE = 105.83;  // Indian Ruppee
    const float EUR_JPY_RATE = 184.14;  // Japanese Yen
    const float EUR_AUD_RATE = 1.73;   // Australian Dollar
    const float EUR_CAD_RATE = 1.61;   // Canadian Dollar
    const float EUR_CHF_RATE = 0.93;   // Swiss Franc

    // Exchange rates from INR
    const float IND_USD_RATE = 0.011;   // US Dollar
    const float IND_EUR_RATE = 0.0094;  // Euro
    const float IND_JPY_RATE = 1.74;    // Japanese Yen
    const float IND_AUD_RATE = 0.016;   // Australian Dollar
    const float IND_CAD_RATE = 0.015;   // Canadian Dollar
    const float IND_CHF_RATE = 0.0088;  // Swiss Franc

    // Exchange rates from JPY
    const float JPY_USD_RATE = 0.0063;   // US Dollar
    const float JPY_EUR_RATE = 0.0054;   // Euro
    const float JPY_IND_RATE = 0.57;     // Indian Ruppee
    const float JPY_AUD_RATE = 0.0094;   // Australian Dollar
    const float JPY_CAD_RATE = 0.0087;   // Canadian Dollar
    const float JPY_CHF_RATE = 0.0048;   // Swiss Franc

    // Exchange rates from AUD
    const float AUD_USD_RATE = 0.67;     // US Dollar
    const float AUD_EUR_RATE = 0.58;     // Euro
    const float AUD_IND_RATE = 62.00;    // Indian Ruppee
    const float AUD_JPY_RATE = 106.00;   // Japanese Yen
    const float AUD_CAD_RATE = 0.93;     // Canadian Dollar
    const float AUD_CHF_RATE = 0.54;     // Swiss Franc

    // Exchange rates from CAD
    const float CAD_USD_RATE = 0.72;     // US Dollar
    const float CAD_EUR_RATE = 0.62;     // Euro
    const float CAD_IND_RATE = 67.00;    // Indian Ruppee
    const float CAD_JPY_RATE = 114.00;   // Japanese Yen
    const float CAD_AUD_RATE = 1.08;     // Australian Dollar
    const float CAD_CHF_RATE = 0.58;     // Swiss Franc

    // Exchange rates from CHF
    const float CHF_USD_RATE = 1.25;     // US Dollar
    const float CHF_EUR_RATE = 1.08;     // Euro
    const float CHF_IND_RATE = 113.00;   // Indian Ruppee
    const float CHF_JPY_RATE = 172.00;   // Japanese Yen
    const float CHF_AUD_RATE = 1.85;     // Australian Dollar
    const float CHF_CAD_RATE = 1.72;     // Canadian Dollar

    // Get base amount from user
    float base_amount;
    printf("Enter base amount: ");
    scanf("%f", &base_amount);

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
    printf("\tUSD\t\tEuros\t\tRupee\t\tYen\t\tAD\t\tCD\t\tSwiss Franc\n");
    printf("USD:\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",
           dollars, eur, ind, jpy, aud, cad, chf);

    // Calculate conversions from EUR
    dollars = base_amount * EUR_USD_RATE;
    eur = base_amount;
    ind = base_amount * EUR_IND_RATE;
    jpy = base_amount * EUR_JPY_RATE;
    aud = base_amount * EUR_AUD_RATE;
    cad = base_amount * EUR_CAD_RATE;
    chf = base_amount * EUR_CHF_RATE;
    //Print row for Euro
    printf("Euro:\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",
           dollars, eur, ind, jpy, aud, cad, chf);

    // Calculate conversions from INR
    dollars = base_amount * IND_USD_RATE;
    eur = base_amount * IND_EUR_RATE;
    ind = base_amount;
    jpy = base_amount * IND_JPY_RATE;
    aud = base_amount * IND_AUD_RATE;
    cad = base_amount * IND_CAD_RATE;
    chf = base_amount * IND_CHF_RATE;

    //Print row for INR
    printf("Rupee:\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",
           dollars, eur, ind, jpy, aud, cad, chf);
    
    // Calculate conversions from JPY
    dollars = base_amount * JPY_USD_RATE;
    eur = base_amount * JPY_EUR_RATE;
    ind = base_amount * JPY_IND_RATE;
    jpy = base_amount;
    aud = base_amount * JPY_AUD_RATE;
    cad = base_amount * JPY_CAD_RATE;
    chf = base_amount * JPY_CHF_RATE;

    //Print row for JPY
    printf("Yen:\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",
           dollars, eur, ind, jpy, aud, cad, chf); 
    
    // Calculate conversions from AUD
    dollars = base_amount * AUD_USD_RATE;
    eur = base_amount * AUD_EUR_RATE;
    ind = base_amount * AUD_IND_RATE;
    jpy = base_amount * AUD_JPY_RATE;
    aud = base_amount;
    cad = base_amount * AUD_CAD_RATE;
    chf = base_amount * AUD_CHF_RATE;

    //Print row for AUD
    printf("AD:\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",
           dollars, eur, ind, jpy, aud, cad, chf);

    // Calculate conversions from CAD
    dollars = base_amount * CAD_USD_RATE;
    eur = base_amount * CAD_EUR_RATE;
    ind = base_amount * CAD_IND_RATE;
    jpy = base_amount * CAD_JPY_RATE;
    aud = base_amount * CAD_AUD_RATE;
    cad = base_amount;
    chf = base_amount * CAD_CHF_RATE;

    //Print row for CAD
    printf("CD:\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",
           dollars, eur, ind, jpy, aud, cad, chf);

    // Calculate conversions from CHF
    dollars = base_amount * CHF_USD_RATE;
    eur = base_amount * CHF_EUR_RATE;
    ind = base_amount * CHF_IND_RATE;
    jpy = base_amount * CHF_JPY_RATE;
    aud = base_amount * CHF_AUD_RATE;
    cad = base_amount * CHF_CAD_RATE;
    chf = base_amount;

    //Print row for CHF
    printf("Swiss Fr:\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",
           dollars, eur, ind, jpy, aud, cad, chf);
   

    return 0;
}