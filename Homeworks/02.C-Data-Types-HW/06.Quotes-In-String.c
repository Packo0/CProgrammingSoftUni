/*
 *  Declare a string variable and assign to it the following value:
 *  The "use" of quotations causes difficulties. \n, \t and \ are also special
characters. 
 * Print the resulting string on the console.
 *  Expected Output
    The "use" of quotations causes difficulties. \n, \t and \
    are also special characters.
 */
#include <stdio.h>

int main() {
    char *escapedString = "The \"use\" of quotations causes difficulties. \\n, \\t and \\ are also special characters.";

    printf("%s\n", escapedString);
    return 0;
}
