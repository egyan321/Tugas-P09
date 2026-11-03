#include <stdio.h> 
int main(void) { 
    int i = 1; 
    while (i <= 5) { 
        printf("while: %d\n", i); 
        i++; 
    } 
        int nilai;
        do { 
            printf("Masukkan angka positif: "); 
            printf("\n");
            scanf("%d", &nilai); 
        } 
        
        while (nilai <= 0); 
            printf("Diterima: %d\n", nilai); 
            
return 0; 
} 