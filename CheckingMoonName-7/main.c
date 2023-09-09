#include <stdio.h>
#include <stdlib.h>

void text(char namaBulan[100], int bulan){
    printf("\nBulan ke-%d adalah %s\n", namaBulan, bulan);
}

int main()
{
    int bulan;

    puts("========================");
    puts("| MENENTUKAN NAMA BULAN |");
    puts("========================");

    do{
        printf("Input angka bulan [1-12]: ");
        scanf("%d", &bulan);
    }while(bulan <= 0 || bulan >= 13);

    if(bulan == 1){
        text(1, "Januari");
    }else if(bulan == 2){
        text(2, "Februari");
    }else if(bulan == 3){
        text(3, "Maret");
    }else if(bulan == 4){
        text(4, "April");
    }else if(bulan == 5){
        text(5, "Mei");
    }else if(bulan == 6){
        text(6, "Juni");
    }else if(bulan == 7){
        text(7, "Juli");
    }else if(bulan == 8){
        text(8, "Agustus");
    }else if(bulan == 9){
        text(9, "September");
    }else if(bulan == 10){
        text(10, "Oktober");
    }else if(bulan == 11){
        text(11, "November");
    }else if(bulan == 12){
        text(12, "Desember");
    }

    return 0;
}