#include <stdio.h>
#include "display.h"

void print_horizontal(int count, int values[], struct font f_data[]) {
    for (int y = 0; y < 8; y++) {
        for (int i = 0; i < count; i++) {
            int number = values[i];
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
}
