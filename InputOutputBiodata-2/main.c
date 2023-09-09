#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[100], fakultas[100], jurusan[100], kota_asal[100], alamat[100], nim[100];

    printf("Nama mahasiswa: ");
    gets(nama);

    printf("NIM: ");
    gets(nim);

    printf("Fakultas: ");
    gets(fakultas);

    printf("Jurusan: ");
    gets(jurusan);

    printf("Kota asal: ");
    gets(kota_asal);

    printf("Alamat: ");
    gets(alamat);

    printf("\n");
    puts("==================");
    puts("| DATA MAHASISWA |");
    puts("==================");

    printf("Nama: %s", nama);
    printf("\nNIM: %s", nim);
    printf("\nFakultas: %s", fakultas);
    printf("\nJurusan: %s", jurusan);
    printf("\nKota asal: %s", kota_asal);
    printf("\nAlamat: %s\n", alamat);



    return 0;
}