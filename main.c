#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main() {
    int choice;
    float n1, n2;

    scanf("%d", &choice);
    scanf("%f %f", &n1, &n2);

    if (choice == 1) printf("%.2f", add(n1, n2));
    else if (choice == 2) printf("%.2f", sub(n1, n2));
    else if (choice == 3) printf("%.2f", mul(n1, n2));
    else if (choice == 4 && n2 != 0) printf("%.2f", div(n1, n2));

    return 0;
}

float add(float a, float b) { return 0; }
float sub(float a, float b) { return 0; }
float mul(float a, float b) { return 0; }
float div(float a, float b) { return 0; }
