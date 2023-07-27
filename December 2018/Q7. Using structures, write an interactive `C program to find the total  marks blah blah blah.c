//Using structures, write an interactive `C program to find the total 
//marks, average marks in the first semester courses of BCA for 5 
//students of your class..
//Note: Assuniptions can be made wherever necessary.

#include <stdio.h>

struct student {
    char name[50];
    int marks[5];
    int total;
    float average;
    char grade;
};

int main() {
    struct student s[5];
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        s[i].total = 0;
        for (j = 0; j < 5; j++) {
            printf("Mark %d: ", j+1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].average = (float)s[i].total / 5.0;
        if (s[i].average >= 90.0) {
            s[i].grade = 'A';
        } else if (s[i].average >= 80.0) {
            s[i].grade = 'B';
        } else if (s[i].average >= 70.0) {
            s[i].grade = 'C';
        } else if (s[i].average >= 60.0) {
            s[i].grade = 'D';
        } else {
            s[i].grade = 'F';
        }
    }

    printf("\n\n");
    printf("Student Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Total: %d\n", s[i].total);
        printf("Average: %.2f\n", s[i].average);
        printf("Grade: %c\n", s[i].grade);
        printf("\n");
    }

    return 0;
}

