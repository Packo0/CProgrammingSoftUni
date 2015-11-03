/*
 * A bank account has a holder name (first name, middle name and last name),
 * available amount of money (balance), bank name, IBAN and
 * 3 credit card numbers associated with the account.
 * Declare the variables needed to keep the information for a
 * single bank account using the appropriate data types and descriptive names.  
 */

#include <stdio.h>

int main() {
    char *firstName = "Amanda";
    char *middleName = "Peterson";
    char *lastName = "Jonson";
    long double moneyBalance = 25651365365.23;
    char *bankName = "CoolBank";
    char *IBAN = "GR16 0110 1250 0000 0001 2300 695";
    unsigned long long firstCreditCardNumber = 379577483555165;
    unsigned long long secondCreditCardNumber = 345407232212119;
    unsigned long long thirdCreditCardNumber = 376253216568346;

    printf("First name: %s\n", firstName);
    printf("Middle name: %s\n", middleName);
    printf("Last name: %s\n", lastName);
    printf("Money balance: %12.2Lf\n", moneyBalance);
    printf("Bank name: %s\n", bankName);
    printf("IBAN: %s\n", IBAN);
    printf("First credit card number: %llu\n", firstCreditCardNumber);
    printf("Second credit card number: %llu\n", secondCreditCardNumber);
    printf("Third credit card number: %llu\n", thirdCreditCardNumber);
    return 0;
}
