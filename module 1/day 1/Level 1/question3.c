// 3. Write a program to read the 
//     - Roll No
//     - Name (Note, you should read full name of the student including initials)
//     - Marks of Physics, Math and Chemistry
//     Calculate the total, percentage and print the summary.

// #include<stdio.h>
// int main()
// {
//     int rollno;
//     float total=0,percentage=0,physics,maths,chemistry;
//     char name[50];
//     scanf("%d",&rollno);
//     scanf(" %[^\n]", name);





// }

#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Marks in Physics: ");
    scanf("%f", &physicsMarks);
    printf("Enter Marks in Math: ");
    scanf("%f", &mathMarks);
    printf("Enter Marks in Chemistry: ");
    scanf("%f", &chemistryMarks);

    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300) * 100;
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}
