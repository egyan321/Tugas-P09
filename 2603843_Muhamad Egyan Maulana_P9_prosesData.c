#include <stdio.h>

int main() {
    float tegangan[8] = {220.8, -1.0, 220.3, -1.0, 220.0, -1.0, 240.5, -1.0};
    
for (int i = 0; i < 8; i++) {
        if (tegangan[i] < 0) {
            printf("data tidak valid %d\n", i);
            continue;
    } 
        if (tegangan[i] > 240.0) {    
            printf("BERBAHAYA! %d\n", i);
            break;
    }
    printf("sampel %d : %.1f V\n", i, tegangan[i]);
}
    return 0;
}