#include "header.h"

void jumlahhari(int *jml_hari,int bulan,int tahun)
{
    if(bulan==1 || bulan==3 || bulan==5 || bulan==7 || bulan==8 || bulan==10 || bulan==12){
        *jml_hari=31;
    }
    else if(bulan==4 || bulan==6 || bulan==9 || bulan==11){
        *jml_hari=30;
    }
    else if(bulan==2){
        if(tahun%4==0 && tahun%100!=0){
            *jml_hari=29;
        }
        else{
            *jml_hari=28;
        }
    }
}

int cari_akhir(int bulan,int tahun)
{
    int akhir=6;



    int tgl,bln,thn;
    thn=2017;

    if(thn<=tahun){
        while(thn<=tahun){
            if(thn==tahun){
                for(bln=1;bln<bulan;bln++){
                    jumlahhari(&tgl,bln,thn);
                    akhir=(akhir+tgl)%7;
                }
            }
            else{
                for(bln=1;bln<=12;bln++){
                    jumlahhari(&tgl,bln,thn);
                    akhir=(akhir+tgl)%7;
                }
            }
            thn++;
        }
    }
    else{
        while(thn>tahun){
            thn--;
            if(thn==tahun){
                for(bln=12;bln>=bulan;bln--){
                    jumlahhari(&tgl,bln,thn);
                    int i=0;
                    while((i+tgl)%7!=akhir){
                        i++;
                    }
                    akhir=i;
                }
            }
            else{
                for(bln=12;bln>=1;bln--){
                    jumlahhari(&tgl,bln,thn);
                    int i=0;
                    while((i+tgl)%7!=akhir){
                        i++;
                    }
                    akhir=i;
                }
            }
        }
    }
    return akhir;
}

void print_kalender(int akhir,int jml_hari,int bulan)
{
    int i,tgl;
    int baris=1;
    printf("--------------------------------------------------\n");
    if(bulan==1){
        printf("|\t\tJanuari\t\t\t\t |\n");
    }
    else if(bulan==2){
        printf("|\t\tFebruari\t\t\t |\n");
    }
    else if(bulan==3){
        printf("|\t\tMaret\t\t\t\t |\n");
    }
    else if(bulan==4){
        printf("|\t\tApril\t\t\t\t |\n");
    }
    else if(bulan==5){
        printf("|\t\tMei\t\t\t\t |\n");
    }
    else if(bulan==6){
        printf("|\t\tJuni\t\t\t\t |\n");
    }
    else if(bulan==7){
        printf("|\t\tJuly\t\t\t\t |\n");
    }
    else if(bulan==8){
        printf("|\t\tAgustus\t\t\t\t |\n");
    }
    else if(bulan==9){
        printf("|\t\tSeptember\t\t\t |\n");
    }
    else if(bulan==10){
        printf("|\t\tOktober\t\t\t\t |\n");
    }
    else if(bulan==11){
        printf("|\t\tNovember\t\t\t |\n");
    }
    else if(bulan==12){
        printf("|\t\tDesember\t\t\t |\n");
    }

    printf("--------------------------------------------------\n");

    printf("|%6s|%6s|%6s|%6s|%6s|%6s|%6s|\n", "minggu", "senin", "selasa","rabu","kamis","jumat","sabtu");
    printf("--------------------------------------------------\n");
    for(i=0,tgl=1;i<jml_hari,tgl<=jml_hari;i++){
        if(akhir==6){
            printf("|  %2d  ", tgl);
            tgl++;
        }
        else{
            if(i<=akhir){
                printf("|      ");
            }
            else{
                printf("|  %2d  ", tgl);
                tgl++;
            }
        }
        if(i==7*baris-1){
            printf("|\n");
            baris++;
        }
    }
    printf("|\n--------------------------------------------------\n");
}
