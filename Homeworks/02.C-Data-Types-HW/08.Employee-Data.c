/*
 * A marketing company wants to keep record of its employees.
 * Each record would have the following characteristics:
         First name
         Last name
         Age (0...100)
         Gender (m or f)
         Personal ID number (e.g. 8306112507)
         Unique employee number (27560000…27569999)
 * Declare the variables needed to keep the information for a single employee
 * using appropriate primitive data types. Use descriptive names.
 * Print the data at the console.
        Expected Output
        First name: Amanda
        Last name: Jonson
        Age: 27
        Gender: f
        Personal ID: 8306112507
        Unique Employee number: 27563571    
 */

#include <stdio.h>

int main() {
    char *firstName = "Amanda";
    char *lastName = "Jonson";
    char age = 27;
    char gender = 'f';
    unsigned long personalId = 8306112507;
    unsigned int uniqueEmployeeNumber = 27563571;

    printf("First name: %s\n", firstName);
    printf("Last name: %s\n", lastName);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Personal ID: %lu\n", personalId);
    printf("Unique Employee number: %d\n", uniqueEmployeeNumber);
    return 0;
}
