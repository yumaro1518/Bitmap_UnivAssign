#include <stdio.h>
#include "display.h"

void print_Italic(int count, int values[], struct font f_data[]) {
    for (int y = 0; y < 8; y++) {
        for (int i = 0; i < count; i++) {
            int number = values[i];

            
            for (int space = 0; space < (count - i - 1) * 2 - y / 2; space++) {
                printf(" ");
            }

            for (int x = 0; x < f_data[number].width; x++) {
                if ((f_data[number].pattern[y] & (0x80 >> x)) == 0) {
                    printf(" ");
                } else {
                    printf("X");
                }
            }
            printf(" "); 
        }
        printf("\n");
    }
    printf("\n");
}
