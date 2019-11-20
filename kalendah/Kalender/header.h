#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    int tanggal;
    int bulan;
    int tahun;
}Kapan;

typedef struct{
    int jumlah;
    char tempat[50];
    char namakeg[50];
    char nama[100][50];
}Jenis;

typedef struct{
    int detik;
    int menit;
    int jam;
}Waktu;

typedef struct{
    Kapan kpn;
    Jenis jns;
    Waktu wkt;
}Kegiatan;

///1.CETAK KALENDER
void jumlahhari(int *jml_hari,int bulan,int tahun);
int cari_akhir(int bulan,int tahun);
void print_kalender(int akhir,int jml_hari,int bulan);

///2.TAMBAH KEGIATAN
void tambah_kegiatan(Kegiatan aktivitas[],int *n);

///3.TAMPIL KEGIATAN
void tampil_kegiatan(Kegiatan aktivitas[], int *n);
void tampil_kegiatan_perbln(Kegiatan aktivitas[], int *n, int bln, int thn);

///4.CARI KEGIATAN
void cari_tgl(Kegiatan aktivitas[],int tanggal,int bulan,int tahun,int n);
void cari_namakegiatan(Kegiatan aktivitas[],char namakegiatan[],int n);
void cari_tempat(Kegiatan aktivitas[],char tempat[],int n);
///5.HAPUS KEGIATAN
void cari_hapus(Kegiatan aktivitas[],char nama[],int tanggal,int bulan,int tahun,int n,char *opsi );
void hapus(Kegiatan aktivitas[],char nama[],int tanggal,int bulan,int tahun,int *n);
///SORTING
void sorttahun(Kegiatan aktivitas[],int n);
void sortbulan(Kegiatan aktivitas[],int n);
void sorthari(Kegiatan aktivitas[],int n);
void sortjam(Kegiatan aktivitas[],int n);
void sortmenit(Kegiatan aktivitas[],int n);
void sortdetik(Kegiatan aktivitas[],int n);
void sorting(Kegiatan aktivitas[],int n);



#endif // HEADER_H_INCLUDED
