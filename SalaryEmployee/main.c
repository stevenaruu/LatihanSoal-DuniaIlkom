#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nama[100];
    int jam_kerja, upah, upah_lembur;
    char golongan;

    puts("===========================");
    puts("| PT. FORSYTHIA SEJAHTERA |");
    puts("===========================");

    printf("Nama karyawan: ");
    gets(nama);

    do{
        printf("Golongan [A-D]: ");
        scanf(" %c", &golongan);
    }while(golongan != 'a' && golongan != 'b' && golongan != 'c' && golongan != 'd' && golongan != 'A' && golongan != 'B' && golongan != 'C' && golongan != 'D');

    printf("Jumlah jam kerja: ");
    scanf("%d", &jam_kerja);

    if(golongan == 'a' || golongan == 'A'){
        upah = 5000;
    }else if(golongan == 'b' || golongan == 'B'){
        upah = 7000;
    }else if(golongan == 'c' || golongan == 'C'){
        upah = 8000;
    }else if(golongan == 'd' || golongan == 'D'){
        upah = 10000;
    }

    upah = upah * jam_kerja;

    if(jam_kerja > 48){
        upah_lembur = ((jam_kerja-48)*4000);
        upah = upah + upah_lembur;
    }

    printf("\n%s menerima upah Rp.%d per minggu\n", nama, upah);



    return 0;
}