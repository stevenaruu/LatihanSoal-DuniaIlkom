#include <stdio.h>
#include <stdlib.h>

void pilihan(char menu[50]){
    printf("Anda memilih %s", menu);
}

int main()
{

    int pilih;
    char ulang;

    do{
      puts("==============================");
      puts("| DAFTAR MENU KOPI FORSYTHIA |");
      puts("==============================");

      printf("1. Espresso\n");
      printf("2. Capuccino\n");
      printf("3. Moccacino\n");
      printf("4. Vanilla Latte\n");
      printf("5. Hazelnut Latte\n");

      printf("Pilihan anda: ");
      scanf("%d", &pilih);

      if(pilih == 1){
          printf("\nPilihan anda %d\n", pilih);
          pilihan("Espresso\n");
      }else if(pilih == 2){
          printf("\nPilihan anda %d\n", pilih);
          pilihan("Capuccino\n");
      }else if(pilih == 3){
          printf("\nPilihan anda %d\n", pilih);
          pilihan("Moccacino\n");
      }else if(pilih == 4){
          printf("\nPilihan anda %d\n", pilih);
          pilihan("Vanilla Latte\n");
      }else if(pilih == 5){
          printf("\nPilihan anda %d\n", pilih);
          pilihan("Hazelnut Latte\n");
      }else{
          printf("\nMaaf menu tidak tersedia! Silahkan datang kembali!");
          break;
      }

      printf("\nIngin memilih menu lain? [t untuk tidak]: ");
      scanf(" %c", &ulang);

    }while(ulang != 't' || pilih <= 0 || pilih >= 6);

    printf("\nTerimakasih sudah berbelanja...\n");

    return 0;
}
