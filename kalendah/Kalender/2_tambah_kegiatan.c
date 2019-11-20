#include "header.h"

void tambah_kegiatan(Kegiatan aktivitas[],int *n)
{
    int i,j,jumlah_hari;
    //int jumlah=*n;
    char pilih='y';
    //jumlah++;

    for(i=*n;pilih=='y';i++){
        printf("\nInput Tanggal Kegiatan (DD/MM/YYYY)\t: ");
        scanf("%d/%d/%d",&aktivitas[i].kpn.tanggal,&aktivitas[i].kpn.bulan,&aktivitas[i].kpn.tahun);
        fflush(stdin);
        jumlahhari(&jumlah_hari,aktivitas[i].kpn.bulan,aktivitas[i].kpn.tahun);
        while(aktivitas[i].kpn.tanggal<1 || aktivitas[i].kpn.tanggal >jumlah_hari || aktivitas[i].kpn.bulan<1 || aktivitas[i].kpn.bulan>12 || aktivitas[i].kpn.tahun<1){
            printf("\n===== FORMAT TANGGAL SALAH ATAU TANGGAL TIDAK SESUAI =====\n\n");
            printf("Input Tanggal Kegiatan (DD/MM/YYYY)\t: ");
            scanf("%d/%d/%d",&aktivitas[i].kpn.tanggal,&aktivitas[i].kpn.bulan,&aktivitas[i].kpn.tahun);
            fflush(stdin);
            jumlahhari(&jumlah_hari,aktivitas[i].kpn.bulan,aktivitas[i].kpn.tahun);
        }
        printf("Input Waktu Kegiatan(Jam:Menit:Detik)\t: ");
        scanf("%d:%d:%d",&aktivitas[i].wkt.jam,&aktivitas[i].wkt.menit,&aktivitas[i].wkt.detik);
        fflush(stdin);
        while(aktivitas[i].wkt.jam<0 || aktivitas[i].wkt.jam>24 || aktivitas[i].wkt.menit<0 || aktivitas[i].wkt.menit>60 || aktivitas[i].wkt.detik<0 || aktivitas[i].wkt.detik>60){
            printf("\n===== FORMAT WAKTU SALAH ATAU WAKTU TIDAK SESUAI ======\n\n");
            printf("Input Waktu Kegiatan(Jam:Menit:Detik)\t: ");
            scanf("%d:%d:%d",&aktivitas[i].wkt.jam,&aktivitas[i].wkt.menit,&aktivitas[i].wkt.detik);
            fflush(stdin);
        }
        //printf("\n");
        printf("Input Nama Kegiatan\t\t\t: ");
        gets(aktivitas[i].jns.namakeg);fflush(stdin);
        printf("Input Tempat Kegiatan\t\t\t: ");
        gets(aktivitas[i].jns.tempat);fflush(stdin);
        printf("Input Jumlah Orang Yang Terlibat\t: ");scanf("%d",&aktivitas[i].jns.jumlah);
        while(aktivitas[i].jns.jumlah<1){
            printf("\n===== KEGIATAN MINIMAL DIIKUTI 1 ORANG =====\n\n");
            printf("Input Jumlah Orang Yang Terlibat\t: ");scanf("%d",&aktivitas[i].jns.jumlah);
        }
        fflush(stdin);
        for(j=0;j<aktivitas[i].jns.jumlah;j++){
            printf("\tNama Orang ke %d \t\t: ",j+1);gets(aktivitas[i].jns.nama[j]);
        }
        *n=*n+1;
        printf("\ntambah kegiatan lagi?? (y/n) : ");scanf("%c",&pilih);

    }
}
