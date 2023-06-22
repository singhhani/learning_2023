#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(FILE* source, FILE* destination, int option) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        if (option == 1)
            ch = toupper(ch);
        else if (option == 2)
            ch = tolower(ch);
        else if (option == 3) {
            static int isFirstChar = 1;
            if (isFirstChar) {
                ch = toupper(ch);
                isFirstChar = 0;
            } else {
                ch = tolower(ch);
            }
            if (ch == '.' || ch == '?' || ch == '!')
                isFirstChar = 1;
        }
        fputc(ch, destination);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: ./cp [option] source_file destination_file\n");
        return 1;
    }

    int option = 0;  

    
    if (argv[1][0] == '-') {
        switch (argv[1][1]) {
            case 'u':
                option = 1;
                break;
            case 'l':
                option = 2;
                break;
            case 's':
                option = 3;
                break;
            default:
                printf("Invalid option!\n");
                return 1;
        }
    }

    FILE* source = fopen(argv[2], "r");
    FILE* destination = fopen(argv[3], "w");

    if (source == NULL || destination == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    copyFile(source, destination, option);

    printf("File copied successfully!\n");

    fclose(source);
    fclose(destination);

    return 0;
}
