#include <stdio.h>
#include <stdlib.h>

void diskon(int diskon){
    printf("\nSelamat, anda mendapatkan diskon %d%%", diskon);
}

int main()
{
    int total_belanja, potongan_harga, total_bayar, total_diskon;

    puts("===========================================");
    puts("| FORSYTHIA MALL (BIG SALE DISKON 13.13)! |");
    puts("===========================================");

    printf("\nTotal belanja: Rp.");
    scanf("%d", &total_belanja);

    if(total_belanja >= 100000 && total_belanja <= 500000){
        diskon(10);
        total_bayar = total_belanja - (total_belanja*0.1);
    }else if(total_belanja >= 500001 && total_belanja <= 1000000){
        diskon(20);
        total_bayar = total_belanja - (total_belanja*0.2);
    }else if(total_belanja >= 1000001){
        diskon(30);
        total_bayar = total_belanja - (total_belanja*0.3);
    }else{
        total_bayar = total_belanja;
    }

    printf("\nTotal bayar: Rp.%d\n", total_bayar);

    return 0;
}