#ifndef DISPLAY_H
#define DISPLAY_H


struct font {
    int width;
    unsigned char pattern[8];
};

void print_vertical(int count, int values[], struct font f_data[]);
void print_horizontal(int count, int values[], struct font f_data[]);
void print_verhori2(int count, int values[], struct font f_data[]);
void print_color(int count, int values[], struct font f_data[], const char* color);
void print_colors(int count, int values[], struct font f_data[]);
void print_Italic(int count, int values[], struct font f_data[]);



#endif // DISPLAY1_H
