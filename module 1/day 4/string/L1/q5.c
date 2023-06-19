#include <stdio.h>
#include <string.h>

void rotateLeft(char str[], int positions) {
    int len = strlen(str);
    positions = positions % len;

    
    for (int i = 0; i < positions; i++) {
        char temp = str[0];
        for (int j = 0; j < len - 1; j++) {
            str[j] = str[j + 1];
        }
        str[len - 1] = temp;
    }
}

void rotateRight(char str[], int positions) {
    int len = strlen(str);
    positions = positions % len;

    
    for (int i = 0; i < positions; i++) {
        char temp = str[len - 1];
        for (int j = len - 1; j > 0; j--) {
            str[j] = str[j - 1];
        }
        str[0] = temp;
    }
}

int main() {
    char str[] = "abcdxyz";
    int positions = 2;

    printf("Input String: %s\n", str);

    
    rotateLeft(str, positions);
    printf("%d Left: %s\n", positions, str);

    
    rotateRight(str, positions);

    
    rotateRight(str, positions);
    printf("%d Right: %s\n", positions, str);

    return 0;
}
