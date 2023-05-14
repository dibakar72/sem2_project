#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    int marks;
    char grade;
};

void calculateGrade(struct Student *student) {
    if (student->marks >= 90) {
        student->grade = 'A';
    } else if (student->marks >= 80) {
        student->grade = 'B';
    } else if (student->marks >= 70) {
        student->grade = 'C';
    } else if (student->marks >= 60) {
        student->grade = 'D';
    } else {
        student->grade = 'F';
    }
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        
        printf("Marks: ");
        scanf("%d", &students[i].marks);

        calculateGrade(&students[i]);
    }

    printf("\nStudent Details:\n");
    printf("-------------------------------------------------\n");
    printf("Roll Number\tName\t\tMarks\tGrade\n");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < numStudents; i++) {
        printf("%d\t\t%s\t\t%d\t%c\n", students[i].rollNumber, students[i].name, students[i].marks, students[i].grade);
    }

    return 0;
}

