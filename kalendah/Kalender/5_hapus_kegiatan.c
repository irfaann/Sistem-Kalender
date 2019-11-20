#include "header.h"

void cari_hapus(Kegiatan aktivitas[],char nama[],int tanggal,int bulan,int tahun,int n,char *opsi )
{
    //int i,j;
    int found=0;
    int i,m;
    printf("\nNo\tTanggal\t\tJam\t\tKegiatan\n");
    printf("===============================================================================\n");
    for(i=0;i<n;i++){
        if(strcmp(aktivitas[i].jns.namakeg,nama)==0){
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
            found++;
        }
    }

    fflush(stdin);
    if(found>0){
        printf("\nYAKIN INGIN MENGHAPUS KEGIATAN INI? (y/n) : ");scanf("%c",opsi);fflush(stdin);
    }
    else{
        printf("\nKEGIATAN TIDAK DITEMUKAN\n");
        *opsi='n';
    }
}


void hapus(Kegiatan aktivitas[],char nama[],int tanggal,int bulan,int tahun,int *n)
{
    int i,j;
    char opsi;
    char m=*n;
    Kegiatan temp;
    cari_hapus(aktivitas,nama,tanggal,bulan,tahun,m,&opsi);
    if(opsi=='y'){
        for(i=0;i<m-1;i++){
            for(j=0;j<m-1;j++){
                if(strcmp(aktivitas[j].jns.namakeg,nama)==0 && aktivitas[j].kpn.tanggal==tanggal && aktivitas[j].kpn.bulan==bulan && aktivitas[j].kpn.tahun==tahun){
                    temp=aktivitas[j];
                    aktivitas[j]=aktivitas[j+1];
                    aktivitas[j+1]=temp;
                }
            }
        }
        m--;
    }
    *n=m;
}
