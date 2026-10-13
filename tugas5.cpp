#include <stdio.h>

int main() {
    int cc;
    float alas, tinggi, panjang, lebar, luas;

    printf("Pilih antara kedua ini\n");
    printf("1. Luas Segitiga\n");
    printf("2. Luas Persegi Panjang\n");
    printf("Pilih: ");
    scanf("%d", &cc);

    switch (cc) {
        case 1:
            printf("Masukkan alas segitiga: ");
            scanf("%f", &alas);
            printf("Masukkan tinggi segitiga: ");
            scanf("%f", &tinggi);
            luas = 0.5 * alas * tinggi;
            printf("Luas Segitiga = %.2f\n", luas);
            break;

        case 2:
            printf("Masukkan panjang persegi panjang: ");
            scanf("%f", &panjang);
            printf("Masukkan lebar persegi panjang: ");
            scanf("%f", &lebar);
            luas = panjang * lebar;
            printf("Luas Persegi Panjang = %.2f\n", luas);
            break;

        default:
            printf("Pilihan tidak valid\n");
            break;
    }

    return 0;
}