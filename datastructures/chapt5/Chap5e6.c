#include <stdio.h>
#include <stdlib.h>

struct student {
    int lunch_number;
    char name[20];
    char grade[20];
    int fees;
};

int main() {
    struct student stud1, *ptr_stud1;
    ptr_stud1 = &stud1;

    system("cls"); // Clear the console screen

    printf("\n Enter the details of the student :");
    
    printf("\n Enter the Lunch Number = ");
    scanf("%d", &ptr_stud1->lunch_number);
    
    printf("\n Enter the Name = ");
    scanf("%s", ptr_stud1->name);
    
    printf("\n Enter the Grade = ");
    scanf("%s", ptr_stud1->grade);
    
    printf("\n Enter the Fees = ");
    scanf("%d", &ptr_stud1->fees);

    printf("\n DETAILS OF THE STUDENT");
    printf("\n LUNCH NUMBER = %d", ptr_stud1->lunch_number);
    printf("\n NAME = %s", ptr_stud1->name);
    printf("\n GRADE = %s", ptr_stud1->grade);
    printf("\n FEES = %d", ptr_stud1->fees);

    return 0;
}