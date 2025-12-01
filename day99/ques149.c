//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>  

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", s->name);
    printf("Roll No: ");
    scanf("%d", &s->roll);
    printf("Marks: ");
    scanf("%f", &s->marks);

    printf("\n--- Student Details ---\n");
    printf("Name  = %s\n", s->name);
    printf("Roll  = %d\n", s->roll);
    printf("Marks = %.2f\n", s->marks);

    free(s);

    return 0;
}
