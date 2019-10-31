#include <stdio.h>
#include <stdlib.h>

 /*
    Nama    : Ardhika Rafi Pratama
    Kelompok: 4115
    Matkul  : Dasar Pemograman
    Judul   : Analisis Tipe Data
    Tanggal : 20 September 2016
    */

int main()
{
    //kamus
    char nama[25];
    char tempat_lahir[20];
    char pekerjaan[10];
    char jenis_kelamin[20];
    char alamat [15];
    char agama[6];
    char status_perkawinan[15];
    char kewarganegaraan[20];
    char berlaku_hingga[20];
    int tanggal;
    int bulan;
    int tahun;
    char nik[20];
    //Input Data
    printf("\t\t=> Input Data<= \n");
    printf("Masukkan Nama :", nama); fgets(nama,25,stdin);
    printf("Masukkan NIK:", nik); scanf("%s",&nik);
    printf("Masukkan Tempat Lahir:", tempat_lahir); scanf("%s",&tempat_lahir);
    printf("Masukkan Tanggal lahir:", tanggal); scanf("%d",&tanggal);
    printf("Masukkan Bulan Lahir:", bulan); scanf("%d",&bulan);
    printf("Masukkan Tahun Lahir:", tahun); scanf("%d",&tahun);
    printf("Masukkan Jenis Kelamin:", jenis_kelamin); scanf("%s",&jenis_kelamin);
    printf("Masukkan Alamat:", alamat); scanf("%s",&alamat);
    printf("Masukkan Agama:", agama); scanf("%s",&agama);
    printf("Masukkan Status Perkawinan:", status_perkawinan); scanf("%s",&status_perkawinan);
    printf("Masukkan Pekerjaan:", pekerjaan); scanf("%s",&pekerjaan);
    printf("Masukkan Kewarganegaraan:", kewarganegaraan); scanf("%s",&kewarganegaraan);
    printf("\n\n\n");
    //Output
    printf("\t===Kartu Tanda Penduduk===\n\n");
    printf("\t===Provinsi Jawa Tengah===\n");
    printf("\t  ===Kota Pekalongan===\n\n\n");
    printf("NIK \t\t\t: %s\n", nik);
    printf("Nama\t\t\t: %s", nama);
    printf("Tempat, tanggal lahir\t: %s,%d-%d-%d\n",tempat_lahir,tanggal,bulan,tahun);
    printf("Jenis Kelamin\t\t: %s\n", jenis_kelamin);
    printf("Alamat\t\t\t: %s\n", alamat);
    printf("Agama\t\t\t: %s\n", agama);
    printf("Status Perkawinan\t: %s\n", status_perkawinan);
    printf("Pekerjaan\t\t: %s\n", pekerjaan);
    printf("Kewarganegaraan\t\t: %s\n", kewarganegaraan);


    return 0;
}
