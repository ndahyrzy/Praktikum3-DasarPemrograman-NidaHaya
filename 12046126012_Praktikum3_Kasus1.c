/*
 *Program  : Sistem Seleksi Beasiswa SI
 *Nama     : Nida Haya Rizkiyah
 *Nim      : 12046126012
 *Deskripsi: Menggunakan if-else if dengan operator logika and
*/
#include <stdio.h>
int main()
{
    char nama[50];
    float ipk;
    long pendapatan;

    printf("===  SISTEM SELEKSI BEASISWA SI  ===\n");
    printf("Masukkan Nama Mahasiswa  : ");
    fgets(nama, 50, stdin);

    printf("Masukkan IPK             : ");
    scanf("%f", &ipk);

    printf("Masukkan Pendapatan Ortu: Rp ");
    scanf("%ld", &pendapatan);

    printf("\n==================================\n");
    printf("\n      HASIL SELEKSI BEASISWA      \n");
    printf("\n==================================\n");
    printf("Nama   : %s", nama);

    if (ipk >= 3.50 && pendapatan < 3000000) {
        printf("Status : Beasiswa Penuh (A)\n");
    }else if (ipk >= 3.00 && pendapatan < 5000000) {
        printf("Status : Beasiswa 50%% (B)\n"); 
    }else if (ipk >= 2.75 && pendapatan < 7000000) {
        printf("Status : Beasiswa 25%% (C)\n"); 
    }else{
        printf("Status : Tidak Mendapat Beasiswa\n");
    }
    printf("====================================\n");

    return 0;
}