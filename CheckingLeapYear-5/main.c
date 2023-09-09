#include <stdio.h>
#include <stdlib.h>

void kabisat(){
    printf("tahun kabisat\n");
}

int main()
{

    int tahun;

    puts("=====================");
    puts("| CEK TAHUN KABISAT |");
    puts("=====================");

    printf("Input tahun: ");
    scanf("%d", &tahun);

    if(tahun % 4 == 0){
        printf("%d adalah ", tahun);
        kabisat();
    }else{
        printf("%d bukan ", tahun);
        kabisat();
    }

    return 0;
}