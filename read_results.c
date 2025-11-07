/*
name: victoria mutethya musili
regno: PA106/G/29037/25
DESCRIPTION:a C file program of a university that
Defines a structure to hold the student information.
 Reads all student records from the binary file.
Displays the name and marks of each student on the screen.
*/


#include <stdio.h>
#include <stdlib.h>


struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student student;

    
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error: Could not open results.dat file.\n");
        return 1;
    }

    printf("=== STUDENT EXAMINATION RESULTS ===\n\n");

    
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s\n", student.name);
        printf("Registration Number: %s\n", student.regNo);
        printf("Total Marks: %.2f\n", student.totalMarks);
        printf("---------------------------------\n");
    }

    fclose(file);
    printf("\nAll records have been displayed successfully.\n");

    return 0;
}
