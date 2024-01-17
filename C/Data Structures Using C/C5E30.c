#include <stdio.h>
#include <string.h>

int main() {
    char students[7][20] = {{"Abraham"}, {"Benjamin"}, {"Charles"}, {"Devin"}, {"Edward"}};
    char deletedStudent[20];
    int numStudents = 5;

    // Lists students
    printf("Initial list of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s\n", students[i]);
    }

    // Set name to be deleted
    printf("\nWhich name should be deleted?: ");
    fgets(deletedStudent, 20, stdin);


    // Find the position of the name to delete
    int position;
    for (position = 0; position < numStudents; position++) {
        if (strcmp(deletedStudent, students[position]) == 0) {
            break;
        }
    }

    // Checking for name
    if (position == numStudents) {
        printf("Name '%s' not found in the list.\n", deletedStudent);
    }

    // Shift names over
    for (int i = position; i < numStudents - 1; i++) {
        strcpy(students[i], students[i + 1]);
    }
    (numStudents)--;

    printf("\nUpdated list of students after deleting '%s':\n", deletedStudent);
    for (int i = 0; i < numStudents; i++) {
        printf("%s\n", students[i]);
    }
}