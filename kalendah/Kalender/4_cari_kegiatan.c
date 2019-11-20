#include "header.h"

void cari_tgl(Kegiatan aktivitas[],int tanggal,int bulan,int tahun,int n)
{
    int i,m;
    printf("\nNo\tTanggal\t\tJam\t\tKegiatan\n");
    printf("===============================================================================\n");
    for(i=0;i<n;i++){
        if(aktivitas[i].kpn.tanggal==tanggal && aktivitas[i].kpn.bulan==bulan && aktivitas[i].kpn.tahun==tahun){
            printf("%d\t",i+1);
            printf("%d/%d/%4d\t%d:%d:%d\t\tNama Kegiatan : %s\n",
                aktivitas[i].kpn.tanggal,aktivitas[i].kpn.bulan,aktivitas[i].kpn.tahun,
                aktivitas[i].wkt.jam,aktivitas[i].wkt.menit,aktivitas[i].wkt.detik,
                aktivitas[i].jns.namakeg);
            printf("\t\t\t\t\tTempat\t: %s\n",aktivitas[i].jns.tempat);
            printf("\t\t\t\t\tJumlah orang : %d\n",aktivitas[i].jns.jumlah);
            printf("\t\t\t\t\t\tOrang Terlibat : \n");
            for(m=0;m<aktivitas[i].jns.jumlah;m++){
                printf("\t\t\t\t\t\t\t%d. %s\n",m+1,aktivitas[i].jns.nama[m]);
            }
        printf("===============================================================================\n");
        }
    }
}

void cari_namakegiatan(Kegiatan aktivitas[],char namakegiatan[],int n)
{
    int i,m;
    printf("\nNo\tTanggal\t\tJam\t\tKegiatan\n");
    printf("===============================================================================\n");
    for(i=0;i<n;i++){
        if(strcmp(aktivitas[i].jns.namakeg,namakegiatan)==0){
            printf("%d\t",i+1);
            printf("%d/%d/%4d\t%d:%d:%d\t\tNama Kegiatan : %s\n",
                aktivitas[i].kpn.tanggal,aktivitas[i].kpn.bulan,aktivitas[i].kpn.tahun,
                aktivitas[i].wkt.jam,aktivitas[i].wkt.menit,aktivitas[i].wkt.detik,
                aktivitas[i].jns.namakeg);
            printf("\t\t\t\t\tTempat\t: %s\n",aktivitas[i].jns.tempat);
            printf("\t\t\t\t\tJumlah orang : %d\n",aktivitas[i].jns.jumlah);
            printf("\t\t\t\t\t\tOrang Terlibat : \n");
            for(m=0;m<aktivitas[i].jns.jumlah;m++){
                printf("\t\t\t\t\t\t\t%d. %s\n",m+1,aktivitas[i].jns.nama[m]);
            }
        printf("===============================================================================\n");
        }
    }
}

void cari_tempat(Kegiatan aktivitas[],char tempat[],int n)
{
    int i,m;
    printf("\nNo\tTanggal\t\tJam\t\tKegiatan\n");
    printf("===============================================================================\n");
    for(i=0;i<n;i++){
        if(strcmp(aktivitas[i].jns.tempat,tempat)==0){
            printf("%d\t",i+1);
            printf("%d/%d/%4d\t%d:%d:%d\t\tNama Kegiatan : %s\n",
                aktivitas[i].kpn.tanggal,aktivitas[i].kpn.bulan,aktivitas[i].kpn.tahun,
                aktivitas[i].wkt.jam,aktivitas[i].wkt.menit,aktivitas[i].wkt.detik,
                aktivitas[i].jns.namakeg);
            printf("\t\t\t\t\tTempat\t: %s\n",aktivitas[i].jns.tempat);
            printf("\t\t\t\t\tJumlah orang : %d\n",aktivitas[i].jns.jumlah);
            printf("\t\t\t\t\t\tOrang Terlibat : \n");
            for(m=0;m<aktivitas[i].jns.jumlah;m++){
                printf("\t\t\t\t\t\t\t%d. %s\n",m+1,aktivitas[i].jns.nama[m]);
            }
        printf("===============================================================================\n");
        }
    }
}
