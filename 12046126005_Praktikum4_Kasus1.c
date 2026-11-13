/*
 * Program      : Mencatak Pola Segitiga Bintang 
 * Nama         : Aditya Maulana
 * MIN          : 12046126005
 * Deskripsi    : Nested for loop untuk pola segitiga bintang
 */
#include <stdio.h>
int main() {
    int N;

    printf("=== CETAK POLA SEGITIGA BINTANG ===\n");
    printf("Masukan jumlah baris: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}