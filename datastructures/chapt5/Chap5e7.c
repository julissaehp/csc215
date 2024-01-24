#include <stdio.h>
#include <stdlib.h>

struct student
{
    int lunch_number;
    char name[20];
    char grade[5];
    int fees;
};

struct student *ptr_stud[10];

int main(){
    int i, n;
    printf("\n Enter the number of students : ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        ptr_stud[i] = (struct student *)malloc(sizeof(struct student));

        printf("\n Enter the data for student %d ", i+1);
        printf("\n LUNCH NUMBER: ");
        scanf("%d", &ptr_stud[i]->lunch_number);

        printf("\n NAME: ");
        scanf("%s", ptr_stud[i]->name);

        printf("\n GRADE: ");
        scanf("%s", ptr_stud[i]->grade);

        printf("\n FEES: ");
        scanf("%d", &ptr_stud[i]->fees);
    }

    printf("\n DETAILS OF STUDENTS");

    for(i=0; i<n; i++){
        printf("\n LUNCH NUMBER = %d", ptr_stud[i]->lunch_number);
        printf("\n NAME = %s", ptr_stud[i]->name);
        printf("\n GRADE = %s", ptr_stud[i]->grade);
        printf("\n FEES = %d", ptr_stud[i]->fees);
    }

    return 0;
}