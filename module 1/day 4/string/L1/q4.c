#include <stdio.h>
#include <stdlib.h>

int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year))
        return 29;

    return daysInMonth[month - 1];
}

int getTotalDays(int day, int month, int year) {
    int totalDays = 0;

    for (int i = 1; i < year; i++) {
        totalDays += isLeapYear(i) ? 366 : 365;
    }

    for (int i = 1; i < month; i++) {
        totalDays += getDaysInMonth(i, year);
    }

    totalDays += day;

    return totalDays;
}

int main() {
    char date1[11];
    char date2[11];

    printf("Enter the first date (DD/MM/YYYY): ");
    fgets(date1, sizeof(date1), stdin);

    printf("Enter the second date (DD/MM/YYYY): ");
    fgets(date2, sizeof(date2), stdin);

    int day1, month1, year1;
    sscanf(date1, "%d/%d/%d", &day1, &month1, &year1);

    int day2, month2, year2;
    sscanf(date2, "%d/%d/%d", &day2, &month2, &year2);

    int totalDays1 = getTotalDays(day1, month1, year1);
    int totalDays2 = getTotalDays(day2, month2, year2);

    int daysElapsed = abs(totalDays2 - totalDays1);

    printf("Number of days elapsed: %d\n", daysElapsed);

    return 0;
}
