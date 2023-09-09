#include <stdio.h>
#include <stdlib.h>

void text() {
    printf("adalah hari");
}

int main()
{
    int hari;

    puts("========================");
    puts("| MENENTUKAN NAMA HARI |");
    puts("========================");

    do{
        printf("Input angka hari [1-7]: ");
        scanf("%d", &hari);
    }while(hari <= 0 || hari >= 8);

    if(hari == 1){
        printf("%d ", hari);
        text();
        printf(" Senin\n");
    }else if(hari == 2){
        printf("%d ", hari);
        text();
        printf(" Selasa\n");
    }else if(hari == 3){
        printf("%d ", hari);
        text();
        printf(" Rabu\n");
    }else if(hari == 4){
        printf("%d ", hari);
        text();
        printf(" Kamis\n");
    }else if(hari == 5){
        printf("%d ", hari);
        text();
        printf(" Jum'at\n");
    }else if(hari == 6){
        printf("%d ", hari);
        text();
        printf(" Sabtu\n");
    }else if(hari == 7){
        printf("%d ", hari);
        text();
        printf(" Minggu\n");
    }


    return 0;
}