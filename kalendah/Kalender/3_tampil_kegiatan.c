#include "header.h"
void tampil_kegiatan(Kegiatan aktivitas[], int *n){
    //system("cls");
    printf("\nNo\tTanggal\t\tJam\t\tKegiatan\n");
    printf("===============================================================================\n");
    int i,m;
    for(i=0;i<*n;i++){
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

void tampil_kegiatan_perbln(Kegiatan aktivitas[], int *n, int bln, int thn){
   // int j;
    printf("No\tTanggal\t\tJam\t\tKegiatan\n");
    printf("===============================================================================\n");
    int i,m;
    for(i=0;i<*n;i++){
        if(aktivitas[i].kpn.bulan == bln && aktivitas[i].kpn.tahun == thn){
           // tampil_kegiatan(acara, &n, &org);
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




