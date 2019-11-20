#include "header.h"

void sorttahun(Kegiatan aktivitas[],int n)
{
    int i,j;
    Kegiatan temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(aktivitas[j].kpn.tahun>aktivitas[j+1].kpn.tahun){
                temp=aktivitas[j];
                aktivitas[j]=aktivitas[j+1];
                aktivitas[j+1]=temp;
            }
        }
    }
}

void sortbulan(Kegiatan aktivitas[],int n)
{
    int i,j;
    Kegiatan temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(aktivitas[j].kpn.bulan>aktivitas[j+1].kpn.bulan){
                temp=aktivitas[j];
                aktivitas[j]=aktivitas[j+1];
                aktivitas[j+1]=temp;
            }
        }
    }
}

void sorthari(Kegiatan aktivitas[],int n)
{
    int i,j;
    Kegiatan temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(aktivitas[j].kpn.tanggal>aktivitas[j+1].kpn.tanggal){
                temp=aktivitas[j];
                aktivitas[j]=aktivitas[j+1];
                aktivitas[j+1]=temp;
            }
        }
    }
}

void sortjam(Kegiatan aktivitas[],int n)
{
    int i,j;
    Kegiatan temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(aktivitas[j].wkt.jam>aktivitas[j+1].wkt.jam){
                temp=aktivitas[j];
                aktivitas[j]=aktivitas[j+1];
                aktivitas[j+1]=temp;
            }
        }
    }
}

void sortmenit(Kegiatan aktivitas[],int n)
{
    int i,j;
    Kegiatan temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(aktivitas[j].wkt.menit>aktivitas[j+1].wkt.menit){
                temp=aktivitas[j];
                aktivitas[j]=aktivitas[j+1];
                aktivitas[j+1]=temp;
            }
        }
    }
}

void sortdetik(Kegiatan aktivitas[],int n)
{
    int i,j;
    Kegiatan temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(aktivitas[j].wkt.detik>aktivitas[j+1].wkt.detik){
                temp=aktivitas[j];
                aktivitas[j]=aktivitas[j+1];
                aktivitas[j+1]=temp;
            }
        }
    }
}

void sorting(Kegiatan aktivitas[],int n)
{
    int i;
    for(i=0;i<n-1;i++){
        sorttahun(aktivitas,n);
        if(aktivitas[i].kpn.tahun==aktivitas[i+1].kpn.tahun){
            sortbulan(aktivitas,n);
            if(aktivitas[i].kpn.bulan==aktivitas[i+1].kpn.bulan){
                sorthari(aktivitas,n);
                if(aktivitas[i].kpn.tanggal==aktivitas[i+1].kpn.tanggal){
                    sortjam(aktivitas,n);
                    if(aktivitas[i].wkt.jam==aktivitas[i+1].wkt.jam){
                        sortmenit(aktivitas,n);
                        if(aktivitas[i].wkt.menit==aktivitas[i+1].wkt.menit){
                            sortdetik(aktivitas,n);
                        }
                    }
                }
            }
        }
    }
}
