#include <iostream>
#include <stdio.h>
#include <conio.h>

int ubah(int nilai);

int main(void)
{
    int nilai;
    printf(" -------Mengunah Bilangan ke Huruf------- \n \n \n");
    printf("Masukkan Nilai 1 sampai 4 : ");
    scanf("%d", &nilai);
    ubah(nilai);
    getch();
}
int ubah(int nilai)
{
    switch (nilai)
    {
    case 1:
        printf("Nilai Huruf A");break;
    case 2:
        printf("Nilai Huruf B");break;
    case 3:
        printf("Nilai Huruf C");break;
    case 4:
        printf("Nilai Huruf D");break;
    default:
        printf("Kesalahan Input Angka");

    }
    return(nilai);
}
