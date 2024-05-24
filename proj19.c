//19. Write a program defining a structure to store the data for a student with fields( rollno,
//f_name, l_name, address, mobileno) , input the data for n students and display the record
//in appropriate format.

#include <stdio.h>

// Define structure for student
struct Student {
    int rollno;
    char f_name[50];
    char l_name[50];
    char address[100];
    char mobileno[15];
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("First Name: ");
        scanf("%s", students[i].f_name);
        printf("Last Name: ");
        scanf("%s", students[i].l_name);
        printf("Address: ");
        scanf(" %[^\n]s", students[i].address);
        printf("Mobile No: ");
        scanf("%s", students[i].mobileno);
    }

    printf("\nStudent Records:\n\n");
    printf("Roll No\tFirst Name\tLast Name\tAddress\t\t\tMobile No\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%-25s%s\n", students[i].rollno, students[i].f_name, students[i].l_name, students[i].address, students[i].mobileno);
    }

    return  0;
}

