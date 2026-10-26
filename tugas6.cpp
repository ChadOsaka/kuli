#include <stdio.h>
int main(){
    float quiz, uts, uas, average;
    char huruf;

    printf("Masukan nilai quiz : ");scanf("%f", &quiz);
    printf("Masukan nilai uts : ");scanf("%f", &uts);
    printf("Masukan nilai uas : ");scanf("%f", &uas);

    if(quiz == 0||uts == 0||uas == 0){
        printf("Anda gagal");
    }
    else{
        average = (quiz + uts + uas) / 3;

        if(average >= 80) huruf='A';
        else if(average >= 70) huruf='B';
        else if(average >= 60) huruf='C';
        else huruf = 'E';

        printf("Nilai rata-rata anda : %.2f\n", average);
        printf("Nilai anda adalah : %c\n", huruf);

        if (huruf == 'E'){
            printf("Anda gagal dengan nilai E\n");
        }
    }
}