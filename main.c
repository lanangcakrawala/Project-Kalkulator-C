#include <stdio.h>

// Prototipe Fungsi (Sudah kamu tambahkan di commit 1)
float kali(float a, float b);

int main() {
    float num1, num2, hasil;
    int pilihan;

    printf("=== KALKULATOR KELOMPOK ===\n");
    printf("1. Perkalian\n");
    printf("Pilih operasi: ");
    scanf("%d", &pilihan);

    printf("Masukkan angka pertama: ");
    scanf("%f", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &num2);

    if(pilihan == 1) {
        hasil = kali(num1, num2);
        printf("Hasil perkalian: %.2f\n", hasil);
    }

    return 0;
}

// Logika Fungsi (Tahap ini yang ditambahkan sekarang)
float kali(float a, float b) {
    return a * b;
}
