//  Write a function to find the type of the character passed
//     - 'A' to 'Z', return 1
//     - 'a; to 'z', return 2
//     - '0' to '9', return 3
//     - Any Other printable symbols, return 4
//     - Non printable symbols, return 5 

#include <stdio.h>
#include <ctype.h>

int findCharType(char ch) {
    if (isupper(ch)) {
        return 1;  
    } else if (islower(ch)) {
        return 2; 
    } else if (isdigit(ch)) {
        return 3;  
    } else if (isprint(ch)) {
        return 4; 
    } else {
        return 5; 
    }
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    int charType = findCharType(ch);

    switch (charType) {
        case 1:
            printf("Uppercase alphabet\n");
            break;
        case 2:
            printf("Lowercase alphabet\n");
            break;
        case 3:
            printf("Digit\n");
            break;
        case 4:
            printf("Printable symbol\n");
            break;
        case 5:
            printf("Non-printable symbol\n");
            break;
        default:
            printf("Invalid character type\n");
            break;
    }

    return 0;
}
