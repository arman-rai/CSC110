#include<stdio.h>

int main() {
    printf("\tDiagnose Diabetes\n");

    int glucose, age, bmi;
    float rbc;

    printf("Enter your glucose level: ");
    scanf("%d", &glucose);

    printf("Enter your age: ");
    scanf("%d", &age);

    if (glucose < 135) {
        if (age < 52) {
            printf("You are non-diabetic.");
        } else {
            printf("Enter your haemoglobin level: ");
            scanf("%f", &rbc);
            if (rbc < 6.4) {
                printf("You are non-diabetic.");
            } else {
                printf("You are diabetic.");
            }
        }
    } else {
        if (age < 50) {
            printf("Enter your body mass index (BMI): ");
            scanf("%d", &bmi);
            if (bmi < 34) {
                printf("You are non-diabetic.");
            } else {
                if (glucose < 151) {
                    printf("You are non-diabetic.");
                } else {
                    printf("You are diabetic.");
                }
            }
        } else {
            if (glucose < 160) {
                printf("Enter your haemoglobin level: ");
                scanf("%f", &rbc);
                if (rbc < 6.5) {
                    printf("You are non-diabetic.");
                } else {
                    printf("You are diabetic.");
                }
            } else {
                printf("You are diabetic.");
            }
        }
    }

    return 0;
}
