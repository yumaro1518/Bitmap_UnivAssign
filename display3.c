#include <stdio.h>
#include "display.h"

void print_verhori2(int count, int values[], struct font f_data[]) {
    for (int y = 0; y < 8; y++) {
        for (int i = 0; i < count; i++) {
            int number = values[i];
            for (int x = 0; x < f_data[number].width; x++) {
                char c = (f_data[number].pattern[y] & (0x80 >> x)) == 0 ? ' ' : 'X';
                printf("%c%c", c, c); 
            }
            printf("  "); 
        }
        printf("\n");
        
        for (int i = 0; i < count; i++) {
            int number = values[i];
            for (int x = 0; x < f_data[number].width; x++) {
                char c = (f_data[number].pattern[y] & (0x80 >> x)) == 0 ? ' ' : 'X';
                printf("%c%c", c, c);
            }
            printf("  ");
        }
        printf("\n");
    }
}

