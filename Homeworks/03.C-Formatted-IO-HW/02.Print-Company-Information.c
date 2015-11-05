/*
 * A company has name, address, phone number, fax number, web site and manager.
 * The manager has first name, last name, age and a phone number.
 * Write a program that reads the information about a company and its manager
 * and prints it back on the console.
    program                 user
    Company name:           Software University
    Company address:        15-18 Tintyava, Sofia
    Phone number:           +359 899 55 55 92
    Fax number:
    Web site:               http://softuni.bg
    Manager first name:     Svetlin
    Manager last name:      Nakov
    Manager age:            25
    Manager phone:          +359 2 981 981
    Output
    Software University
    Address: 26 V. Kanchev, Sofia
    Tel. +359 899 55 55 92
    Fax: (no fax)
    Web site: http://softuni.bg
    Manager: Svetlin Nakov (age: 25, tel. +359 2 981 981)
 */

#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100

void removeNewLine(char *input);

int main() {
    char companyName[BUFFER_SIZE],
            companyAddress[BUFFER_SIZE],
            phoneNumber[BUFFER_SIZE],
            faxNumber[BUFFER_SIZE],
            webSite[BUFFER_SIZE],
            managerFirstName[BUFFER_SIZE],
            managerLastName[BUFFER_SIZE],
            managerAge[BUFFER_SIZE],
            managerPhone[BUFFER_SIZE];

    printf("Please enter the following information about the firm!\n");

    printf("Company name: ");
    fgets(companyName, BUFFER_SIZE, stdin);
    removeNewLine(companyName);

    printf("Company address: ");
    fgets(companyAddress, BUFFER_SIZE, stdin);
    removeNewLine(companyAddress);

    printf("Phone number: ");
    fgets(phoneNumber, BUFFER_SIZE, stdin);
    removeNewLine(phoneNumber);

    printf("Fax number: ");
    fgets(faxNumber, BUFFER_SIZE, stdin);
    removeNewLine(faxNumber);

    printf("Web site: ");
    fgets(webSite, BUFFER_SIZE, stdin);
    removeNewLine(webSite);

    printf("Manager first name: ");
    fgets(managerFirstName, BUFFER_SIZE, stdin);
    removeNewLine(managerFirstName);

    printf("Manager last name: ");
    fgets(managerLastName, BUFFER_SIZE, stdin);
    removeNewLine(managerLastName);

    printf("Manager age: ");
    fgets(managerAge, BUFFER_SIZE, stdin);
    removeNewLine(managerAge);

    printf("Manager phone: ");
    fgets(managerPhone, BUFFER_SIZE, stdin);
    removeNewLine(managerPhone);

    printf("%s\nAddress: %s\nTel. %s\nFax: %s\nWeb site: %s\nManager: %s %s (age: %s, tel. %s\n",
            (companyName[0] != '\0' ? companyName : "(no company name)"),
            (companyAddress[0] != '\0' ? companyAddress : "(no company address)"),
            (phoneNumber[0] != '\0' ? phoneNumber : "(no phone number)"),
            (faxNumber[0] != '\0' ? faxNumber : "(no fax)"),
            (webSite[0] != '\0' ? webSite : "(no web site)"),
            (managerFirstName[0] != '\0' ? managerFirstName : "(no first name)"),
            (managerLastName[0] != '\0' ? managerLastName : "(no last name)"),
            (managerAge[0] != '\0' ? managerAge : "(no age entered)"),
            (managerPhone[0] != '\0' ? managerPhone : "(no phone)")
            );
    return 0;
}

void removeNewLine(char *input) {
    int len = strlen(input);
    input[len - 1] = '\0';
}

