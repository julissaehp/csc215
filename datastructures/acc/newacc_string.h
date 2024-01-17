#include <stdio.h> 
#include <string.h>

int main()
{
    char str[100];
    printf ("\n Enter the string: "); 
    fgets(str, 100, stdin); 

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ';'){
            str[i] = str[i + 1];
            } // Move back to recheck the current position
        }

    // Period to commas
    for(int i = 0; str[i] != '\0'; i++){
        if (str[i] == '.') {
            str[i] = ',';
        }
    }
}

#include <stdio.h>
#include <string.h>

int main()
{
    char students[7][20] = {{"Abraham"}, {"Benjamin"}, {"Charles"}, {"Devin"}, {"Edward"}};
    char newStudent[20];

    int pos, i;
    int numberStudents = 5;

    printf("Initial list of students:\n");
    for(int i = 0; i < numberStudents; i++) {
        printf("%s\n", students[i]);
    }


    printf("\nEnter the new student's name: ");
    fgets(newStudent, 20, stdin);

    for(pos = 0; pos < numberStudents; pos++)
    {
        if(strcmp(newStudent, students[i]) < 0)
        {
            break;
        }
    }

    for(i = numberStudents; i > pos; i--) {
        strcpy(students[i], students[i - 1]);
    }

    // Insert the new name at the correct position
    strcpy(students[pos], newStudent);
    numberStudents++;

    

    // Display the updated list of students
    printf("\nUpdated list of students after inserting '%s':\n", newStudent);
    for (int i = 0; i < numberStudents; i++) {
        printf("%s\n", students[i]);
    }

    return 0;
}


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
