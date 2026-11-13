/*
 * Program   : Game tebak angka
 * Nama      : Aditya Maulana
 * NIM       : 12046126005
 * Deslripsi : For loop untuk game tebak anggka dengan petunjuk
 */
#include <stdio.h>

int main() {
    const int ANGKA_RAHASIA = 73;
    int tebakan = 0;
    int jumlah_coba = 0;

    printf("=== TATARUCINGAN ANGKA ===\n");
    printf("Urang boga angka rahasia 1-100.\n");
    printf("Sok taruh!\n\n");

    while (tebakan != ANGKA_RAHASIA) {
        printf("Masukan tebakan anda: ");
        scanf("%d", &tebakan);
        jumlah_coba++;

        if (tebakan < ANGKA_RAHASIA) {
            printf("Angka lEUTIK teuing! Coba lagi.\n\n");
        } else if (tebakan > ANGKA_RAHASIA) {
            printf("Angka GEDE teuing! Coba lagi.\n\n");
        } else {
            printf("\n*** SELAMAT! Anda benar! ***\n");
            printf("Angka rahasianya adalah: %d\n", ANGKA_RAHASIA);
        }
    }

    printf("\nAnda menebak sebanyak %d kali.\n", jumlah_coba);
    printf("Hatur nuhun tos maen!\n");

    return 0;
}