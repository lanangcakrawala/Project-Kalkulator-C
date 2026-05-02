#include <stdio.h>

// --- FUNGSI Ivan & Wibi ---
float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float div(float a, float b) { return a / b; }

// --- FUNGSI CAKRA (PERKALIAN) ---
float mul(float a, float b) { 
    return a * b; 
}

int main() {
    int op;
    float x, y;

    printf("=== KALKULATOR KELOMPOK ===\n");
    printf("1. Add (Tambah)\n2. Sub (Kurang)\n3. Mul (Kali)\n4. Div (Bagi)\n");

    do {
        printf("Select Menu (1-4): ");
        scanf("%d", &op);

        if (op < 1 || op > 4) {
            printf("Error: Invalid choice! Please select between 1-4.\n");
        }
    } while (op < 1 || op > 4);

    printf("Enter two numbers: ");
    while (scanf("%f %f", &x, &y) != 2) {
        printf("Error: Please enter valid numbers!\n");
        printf("Enter two numbers: ");
        while(getchar() != '\n'); 
    }

    printf("Result: ");
    if (op == 1) printf("%.2f", add(x, y));
    else if (op == 2) printf("%.2f", sub(x, y));
    else if (op == 3) printf("%.2f", mul(x, y)); // Memanggil fungsi buatan Cakra
    else if (op == 4) {
        if (y != 0) printf("%.2f", div(x, y));
        else printf("Error: Division by zero");
    }

    printf("\n");
    return 0;
}