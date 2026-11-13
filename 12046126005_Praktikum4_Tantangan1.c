/*
 * Program   : Tabel Perkalian
 * Nama      : Aditya Maulana
 * NIM       : 12046126005
 * Deslripsi : Membuat tabel perkalian dengan ukuran N x N
 */
#include <stdio.h>

int main() {
    int n, i, j;

    // Input N dengan validasi 1-10
    do {
        printf("Masukkan N (1-10): ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("Input tidak valid! N harus antara 1 sampai 10.\n");
        }
    } while (n < 1 || n > 10);

    printf("\nTabel Perkalian %d x %d:\n\n", n, n);

    // Nested for loop: baris (i) x kolom (j)
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}