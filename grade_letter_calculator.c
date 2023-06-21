#include <stdio.h>
#include <string.h>

// Structure about students info
struct students {
    char name[15];
    float gpa;
    char gname[3];
};

void letter(char (*ptr)[2], struct students stu[], int i);
void table(struct students stu[], int i);

int main(void) {
    char let[2];
    char (*ptr)[2];
    int i = 0;
    ptr = &let;
    printf("Please enter number of students: ");
    scanf("%d", &i);
    struct students stu[i];
    for (int j = 0; j < i; j++) {
        printf("Please enter %d. student's name then enter gpa: ", j + 1);
        scanf("%s%f", stu[j].name, &stu[j].gpa);
        letter(ptr, stu, i);
        table(stu, i);
    }
}

// Letter grading function taking gpa from structure stu. Then calculating letter grade and putting grade in to stu.gname
void letter(char (*ptr)[2], struct students stu[], int i) {
    for (int j = 0; j < i; j++) {
        if (stu[j].gpa >= 4.00) {
            strcpy(stu[j].gname, "AA");
        } else if (stu[j].gpa >= 3.50) {
            strcpy(stu[j].gname, "BA");
        } else if (stu[j].gpa >= 3.00) {
            strcpy(stu[j].gname, "BB");
        } else if (stu[j].gpa >= 2.50) {
            strcpy(stu[j].gname, "BC");
        } else if (stu[j].gpa >= 2.00) {
            strcpy(stu[j].gname, "CC");
        } else if (stu[j].gpa >= 1.50) {
            strcpy(stu[j].gname, "DC");
        } else if (stu[j].gpa >= 1.00) {
            strcpy(stu[j].gname, "DD");
        } else if (stu[j].gpa >= 0.50) {
            strcpy(stu[j].gname, "FD");
        } else if (stu[j].gpa >= 0.00) {
            strcpy(stu[j].gname, "FF");
        }
    }
}

// Table drawing with structure info
void table(struct students stu[], int i) {
    for (int j = 0; j < i; j++) {
        printf("__________________\n ");
        printf("Student name: %s \n", stu[j].name);
        printf("Student letter grade: %s \n", stu[j].gname);
        printf("__________________\n");
    }
}
