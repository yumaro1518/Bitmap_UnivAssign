#include <stdio.h>
#include "display.h"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

void print_color(int count, int values[], struct font f_data[], const char* color) {
    for (int y = 0; y < 8; y++) {
        printf("%s", color); 
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
        printf("%s\n", RESET); 
    }
    printf("\n");
}

void print_colors(int count, int values[], struct font f_data[]) {
    const char *colors[] = {RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN};
    int color_count = sizeof(colors) / sizeof(colors[0]);

    for (int y = 0; y < 8; y++) {
        for (int i = 0; i < count; i++) {
            int number = values[i];
            const char *color = colors[i % color_count];

            printf("%s", color); // Set color
            for (int x = 0; x < f_data[number].width; x++) {
                if ((f_data[number].pattern[y] & (0x80 >> x)) == 0) {
                    printf(" ");
                } else {
                    printf("X");
                }
            }
            printf("%s ", RESET); // Reset color and add space between characters
        }
        printf("\n");
    }
    printf("\n");
}
