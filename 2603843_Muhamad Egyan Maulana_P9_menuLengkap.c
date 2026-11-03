#include <stdio.h>

int main() {

    int pilihan;

    do {
    printf("Menu:\n");
    printf("1. Ukur Tegangan\n");
    printf("2. Ukur Arus\n");
    printf("3. Ukur Resistansi\n");
    printf("4. Keluar\n");
    printf("Pilihan: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Ukur Tegangan\n");
            break;
        case 2:
            printf("Ukur Arus\n");
            break;
        case 3:
            printf("Ukur Resistansi\n");
            break;
        case 4:
            printf("terimakasih\n");
            break;
        default:
            printf("menu tidak valid\n");
    }
} while (pilihan != 4); 
return 0;
}