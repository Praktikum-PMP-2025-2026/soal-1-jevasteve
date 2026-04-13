/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1
 *   Hari dan Tanggal    : Senin, 13 April 2026
 *   Nama (NIM)          : Jeva Steve Sinaga (13224002)
 *   Nama File           : soal1.c
 *   Deskripsi           :  Input terdiri dari 4 bilangan bulat: izin suhu radiasi jam  
                            • izin bernilai 1 sampai 3  
                            • suhu dalam satuan 0.1°C, misalnya 371 berarti 37.1°C  
                            • radiasi adalah bilangan bulat nonnegatif  
                            • jam adalah bilangan bulat 0 sampai 23 
                            Status ditentukan dengan urutan prioritas berikut:  
                            • Jika radiasi >= 6, keluaran TOLAK  
                            • Else jika suhu >= 390, keluaran KARANTINA  
                            • Else jika izin == 1 dan jam < 6 atau jam > 20, keluaran TOLAK  
                            • Else jika izin == 1, keluaran MASUK  
                            • Else jika izin == 2 dan radiasi <= 2 dan jam di antara 8 sampai 18 inklusif, keluaran MASUK  
                            • Else jika izin == 2, keluaran PEMERIKSAAN  
                            • Else jika izin == 3 dan radiasi == 0 dan suhu < 380, keluaran MASUK  
                            • Selain itu, keluaran TOLAK 
 */


 #include <stdio.h>
  
 int main() {
    int radiasi, suhu, jam, izin;
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);

    if (radiasi >= 6) {
        printf("TOLAK");
    }
    else if (suhu >= 390) {
        printf("KARANTINA");
    }
    else if (izin == 1) {
        if (jam < 6 || jam > 20) {
            printf("TOLAK");
        }
        else {
            printf("MASUK");
        }
    }
    else if (izin == 2) {
        if (radiasi <= 6 &&  8 <= jam <= 20) {
            printf("MASUK");
        }
        else {
            printf("PEMERIKSAAN");
        }
    }
    else if (izin == 3 && radiasi == 0 && suhu < 380) {
        printf("MASUK");
    }
    else {
        printf("TOLAK");
    }
 }
