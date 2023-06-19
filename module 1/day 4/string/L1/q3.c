#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char timeString[9];
    fgets(timeString, sizeof(timeString), stdin);
    
    int hours, minutes, seconds;
    sscanf(timeString, "%d:%d:%d", &hours, &minutes, &seconds);

    int totalSeconds = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}
