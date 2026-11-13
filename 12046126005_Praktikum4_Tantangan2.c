/* Program   : Sistem Login Dengan Batas Percobaan
 * Nama      : Aditya Maulana
 * NIM       : 12046126005
 * Deslripsi : Membuat sistem login sederhana
 */
#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    int password;
    int percobaan = 0;
    int berhasil = 0;

    printf("=== SISTEM LOGIN ===\n");

    while (percobaan < 3) {
        printf("Username : ");
        scanf("%49s", username);
        printf("Password : ");
        scanf("%d", &password);
        percobaan++;

        if (strcmp(username, "admin") == 0 && password == 1234) {
            berhasil = 1;
            break;
        }
        printf("username atau password salah. sisa percobaan: %d\n\n", 3 - percobaan);
    }

    if (berhasil) {
        printf("\nLogin berhasil\n");
    } else {
        printf("\nAkun terkunci hubungi admin.\n");
    }

    return 0;
}