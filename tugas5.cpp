#include <stdio.h>

int main(){
    int cc;
    float alas, tinggi, panjang, lebar, luas;
    printf("Pilih antara kedua ini\n");
    printf("1. Luas Segitiga\n");
    printf("2. Luas Persegi panjang\n");
    printf("Pilih: ");
    scanf("%d", &cc);

    switch(cc){
        case 1:
        printf("Masukan alas segitiga: ");
        scanf("%f", &alas);
        printf("Masukan tinggi segitiga: ");
        luas = 0.5 * alas * tinggi:
        printf("Luas Segitiga = %.2f\n", luas);
        break;

        case 2:
        printf("Masukan panjang persegi panjang: ");
        scanf("%f", &panjang);
        printf("Masukan lebar persegi panjang: ");
        scanf("%f", &lebar);
        luas = panjang * lebar;
        printf("Luas persegi panjang = %.2f\n", luas);
        break;

        default:
        printf("Pilihan tidak valid\n");
        break;

    }
    return 0;
}