#include "header.h"
int main()
{
    system("color 3");

    Kegiatan aktivitas[100];
    int n=0;
    char menu_awal;
    int jumlah_hari;
    //int i;
    do{
        printf("===== KALENDER KEGIATAN =====\n");
        printf("\t Pilihan Menu :\n");
        printf("1.\tLihat Kalender\n");
        printf("2.\tTambah Kegiatan\n");
        printf("3.\tTampilkan Semua Kegiatan\n");
        printf("4.\tCari Kegiatan\n");
        printf("5.\tHapus Kegiatan\n");
        int pilih_menu;
        printf("\nPilih Menu : ");scanf("%d",&pilih_menu);
        while(pilih_menu<1 || pilih_menu>5){
            printf("Menu yang anda masukan salah !!!\n");
            printf("Pilih Menu : ");scanf("%d",&pilih_menu);
        }
        if(pilih_menu==1){
            system("cls");
            int bulan,tahun,jml_hari,akhir;
            printf("Input Bulan dan Tahun (MM/YYYY)\t: ");scanf("%d/%d",&bulan,&tahun);
            while(bulan<1 || bulan>12 || tahun<1){
                printf("\n===== FORMAT TANGGAL SALAH ATAU TANGGAL TIDAK SESUAI =====\n\n");
                printf("Input Bulan dan Tahun (MM/YYYY)\t: ");scanf("%d/%d",&bulan,&tahun);
            }
            jumlahhari(&jml_hari,bulan,tahun);
            akhir=cari_akhir(bulan,tahun);
            print_kalender(akhir,jml_hari,bulan);
            printf("\n\n");
            tampil_kegiatan_perbln(aktivitas,&n,bulan,tahun);
            fflush(stdin);
            printf("\n\n\tKembali ke menu utama? (y/n) : ");scanf("%c",&menu_awal);
            system("cls");
        }
        else if(pilih_menu==2){
            tambah_kegiatan(aktivitas,&n);
            fflush(stdin);
            printf("\n\n\tKembali ke menu utama? (y/n) : ");scanf("%c",&menu_awal);
            system("cls");
        }
        else if(pilih_menu==3){
            tampil_kegiatan(aktivitas,&n);
            fflush(stdin);
            printf("\n\n\tKembali ke menu utama? (y/n) : ");scanf("%c",&menu_awal);
            system("cls");
        }
        else if(pilih_menu==4){
            int pilihan;
            printf("Cari Kegiatan Menurut : \n");
            printf("\t1. Tanggal\n");
            printf("\t2. Nama\n");
            printf("\t3. Tempat\n");
            printf("Masukan pilihan : ");scanf("%d",&pilihan);
            while(pilihan<1 || pilihan>3){
                printf("Pilihan salah !!!\n");
                printf("Masukan pilihan : ");scanf("%d",&pilihan);
            }
            system("cls");
            if(pilihan==1){
                int tgl_cari,bln_cari,thn_cari;
                printf("Input Tanggal Kegiatan Yang Dicari (DD/MM/YYYY)\t: ");
                scanf("%d/%d/%d",&tgl_cari,&bln_cari,&thn_cari);
                jumlahhari(&jumlah_hari,bln_cari,thn_cari);
                while(tgl_cari>jumlah_hari || bln_cari>12){
                    printf("\n===== FORMAT TANGGAL SALAH ATAU TANGGAL TIDAK SESUAI =====\n\n");
                    printf("Input Tanggal Kegiatan Yang Dicari (DD/MM/YYYY)\t: ");
                    scanf("%d/%d/%d",&tgl_cari,&bln_cari,&thn_cari);fflush(stdin);
                    jumlahhari(&jumlah_hari,bln_cari,thn_cari);
                }
                cari_tgl(aktivitas,tgl_cari,bln_cari,thn_cari,n);
                fflush(stdin);
                printf("\n\n\tKembali ke menu utama? (y/n) : ");scanf("%c",&menu_awal);
                system("cls");
            }
            else if(pilihan==2){
                char nama_cari[50];
                printf("Masukan Nama kegiatan yang dicari : ");fflush(stdin);gets(nama_cari);
                cari_namakegiatan(aktivitas,nama_cari,n);
                fflush(stdin);
                printf("\n\n\tKembali ke menu utama? (y/n) : ");scanf("%c",&menu_awal);
                system("cls");
            }
            else if(pilihan==3){
                char nama_tempat[50];
                printf("Masukan Nama tempat yang dicari : ");fflush(stdin);gets(nama_tempat);
                cari_tempat(aktivitas,nama_tempat,n);
                fflush(stdin);
                printf("\n\n\tKembali ke menu utama? (y/n) : ");scanf("%c",&menu_awal);
                system("cls");
            }
        }
        else if(pilih_menu==5){
            int tgl_hapus,bln_hapus,thn_hapus;
            char nama_hapus[50];
            printf("\tHapus Kegiatan !!! \n");
            printf("Input Nama Kegiatan Yang Akan Dihapus\t: ");fflush(stdin);gets(nama_hapus);
            printf("Input Tanggal Kegiatan Yang Akan Dihapus (DD/MM/YYYY)\t: ");
            scanf("%d/%d/%d",&tgl_hapus,&bln_hapus,&thn_hapus);
            jumlahhari(&jumlah_hari,bln_hapus,thn_hapus);
            while(tgl_hapus>jumlah_hari || bln_hapus>12){
                printf("\n===== FORMAT TANGGAL SALAH ATAU TANGGAL TIDAK SESUAI =====\n\n");
                printf("Input Tanggal Kegiatan Yang Akan Dihapus (DD/MM/YYYY)\t: ");
                scanf("%d/%d/%d",&tgl_hapus,&bln_hapus,&thn_hapus);fflush(stdin);
                jumlahhari(&jumlah_hari,bln_hapus,thn_hapus);
            }
            hapus(aktivitas,nama_hapus,tgl_hapus,bln_hapus,thn_hapus,&n);
            printf("\n\n\tKembali ke menu utama? (y/n) : ");scanf("%c",&menu_awal);
            system("cls");
        }
        sorting(aktivitas,n);

    }while(menu_awal=='y');

    return 0;
}
