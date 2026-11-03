#include <stdio.h>

int main() {

    int pilihan;
    printf("Menu:\n");
    printf("1. Ukur Tegangan\n");
    printf("2. Ukur Arus\n");
    printf("3. Ukur Resistansi\n");
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
        default:
            printf("menu tidak valid\n");
    }
return 0;
}