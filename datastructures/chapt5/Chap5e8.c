#include <stdio.h>

struct student {
    int roll_number;
    char name[20];
    char course[20];
    int fees;
};

void display(struct student);

int main() {
    struct student stu;
    
    printf("Enter the data for the student:\n");
    
    printf("LUNCH NUMBER: ");
    scanf("%d", &stu.roll_number);

    printf("NAME: ");
    scanf("%s", stu.name);

    printf("COURSE: ");
    scanf("%s", stu.course);

    printf("FEES: ");
    scanf("%d", &stu.fees);

    display(stu);

    return 0;
}

void display(struct student stu) {
    printf("\nDETAILS OF STUDENT");
    printf("\nLUNCH NUMBER = %d", stu.roll_number);
    printf("\nNAME = %s", stu.name);
    printf("\nCOURSE = %s", stu.course);
    printf("\nFEES = %d", stu.fees);
}