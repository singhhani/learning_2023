#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

int main() {
    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    char line[MAX_LINE_LENGTH];

   \
    if (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        printf("Header: %s", line);
    }

   
    int entryNo;
    char sensorNo[10];
    float temperature, humidity, light;
    char time[10];

    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        sscanf(line, "%d,%[^,],%f,%f,%f,%[^,]", &entryNo, sensorNo, &temperature, &humidity, &light, time);
        printf("EntryNo: %d, SensorNo: %s, Temperature: %.2f, Humidity: %.2f, Light: %.2f, Time: %s\n",
               entryNo, sensorNo, temperature, humidity, light, time);
    }

    fclose(file);
    return 0;
}
