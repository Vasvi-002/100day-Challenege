//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];   
}

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student top = getTopStudent(s, 5);

    printf("\n--- Top Student ---\n");
    printf("Name     : %s\n", top.name);
    printf("Roll No  : %d\n", top.roll_no);
    printf("Marks    : %.2f\n", top.marks);

    return 0;
}
