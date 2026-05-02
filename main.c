#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main() {
    int choice;
    float n1, n2;

    printf("Select (1:Add, 2:Sub, 3:Mul, 4:Div): ");
    scanf("%d", &choice);
    printf("Input 2 numbers: ");
    scanf("%f %f", &n1, &n2);

    printf("Result: ");
    if (choice == 1) printf("%.2f", add(n1, n2));
    else if (choice == 2) printf("%.2f", sub(n1, n2));
    else if (choice == 3) printf("%.2f", mul(n1, n2));
    else if (choice == 4) {
        if (n2 != 0) printf("%.2f", div(n1, n2));
        else printf("Math Error");
    }
    
    printf("\n");
    return 0;
}

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    return a / b;
}
