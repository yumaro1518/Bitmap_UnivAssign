#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "display1.c"
#include "display2.c"
#include "display3.c"
#include "display4.c"
#include "display5.c"
#include "display.h"

int main()
{
    struct font f_data[26];

    // A
    f_data[0].width = 8;
    f_data[0].pattern[0] = 0x3c;
    f_data[0].pattern[1] = 0x42;
    f_data[0].pattern[2] = 0x42;
    f_data[0].pattern[3] = 0x42;
    f_data[0].pattern[4] = 0x7e;
    f_data[0].pattern[5] = 0x42;
    f_data[0].pattern[6] = 0x42;
    f_data[0].pattern[7] = 0x00;

    // B
    f_data[1].width = 8;
    f_data[1].pattern[0] = 0x7c;
    f_data[1].pattern[1] = 0x42;
    f_data[1].pattern[2] = 0x42;
    f_data[1].pattern[3] = 0x7c;
    f_data[1].pattern[4] = 0x42;
    f_data[1].pattern[5] = 0x42;
    f_data[1].pattern[6] = 0x7c;
    f_data[1].pattern[7] = 0x00;

    // C
    f_data[2].width = 8;
    f_data[2].pattern[0] = 0x3c;
    f_data[2].pattern[1] = 0x42;
    f_data[2].pattern[2] = 0x40;
    f_data[2].pattern[3] = 0x40;
    f_data[2].pattern[4] = 0x40;
    f_data[2].pattern[5] = 0x42;
    f_data[2].pattern[6] = 0x3c;
    f_data[2].pattern[7] = 0x00;

    // D
    f_data[3].width = 8;
    f_data[3].pattern[0] = 0x78;
    f_data[3].pattern[1] = 0x44;
    f_data[3].pattern[2] = 0x42;
    f_data[3].pattern[3] = 0x42;
    f_data[3].pattern[4] = 0x42;
    f_data[3].pattern[5] = 0x44;
    f_data[3].pattern[6] = 0x78;
    f_data[3].pattern[7] = 0x00;

    // E
    f_data[4].width = 8;
    f_data[4].pattern[0] = 0x7e;
    f_data[4].pattern[1] = 0x40;
    f_data[4].pattern[2] = 0x40;
    f_data[4].pattern[3] = 0x7c;
    f_data[4].pattern[4] = 0x40;
    f_data[4].pattern[5] = 0x40;
    f_data[4].pattern[6] = 0x7e;
    f_data[4].pattern[7] = 0x00;

    // F
    f_data[5].width = 8;
    f_data[5].pattern[0] = 0x7e;
    f_data[5].pattern[1] = 0x40;
    f_data[5].pattern[2] = 0x40;
    f_data[5].pattern[3] = 0x7c;
    f_data[5].pattern[4] = 0x40;
    f_data[5].pattern[5] = 0x40;
    f_data[5].pattern[6] = 0x40;
    f_data[5].pattern[7] = 0x00;

    // G
    f_data[6].width = 8;
    f_data[6].pattern[0] = 0x3c;
    f_data[6].pattern[1] = 0x42;
    f_data[6].pattern[2] = 0x40;
    f_data[6].pattern[3] = 0x4e;
    f_data[6].pattern[4] = 0x42;
    f_data[6].pattern[5] = 0x42;
    f_data[6].pattern[6] = 0x3c;
    f_data[6].pattern[7] = 0x00;

    // H
    f_data[7].width = 8;
    f_data[7].pattern[0] = 0x42;
    f_data[7].pattern[1] = 0x42;
    f_data[7].pattern[2] = 0x42;
    f_data[7].pattern[3] = 0x7e;
    f_data[7].pattern[4] = 0x42;
    f_data[7].pattern[5] = 0x42;
    f_data[7].pattern[6] = 0x42;
    f_data[7].pattern[7] = 0x00;

    // I
    f_data[8].width = 8;
    f_data[8].pattern[0] = 0x7e;
    f_data[8].pattern[1] = 0x18;
    f_data[8].pattern[2] = 0x18;
    f_data[8].pattern[3] = 0x18;
    f_data[8].pattern[4] = 0x18;
    f_data[8].pattern[5] = 0x18;
    f_data[8].pattern[6] = 0x7e;
    f_data[8].pattern[7] = 0x00;

    // J
    f_data[9].width = 8;
    f_data[9].pattern[0] = 0x7e;
    f_data[9].pattern[1] = 0x18;
    f_data[9].pattern[2] = 0x18;
    f_data[9].pattern[3] = 0x18;
    f_data[9].pattern[4] = 0x18;
    f_data[9].pattern[5] = 0x18;
    f_data[9].pattern[6] = 0x70;
    f_data[9].pattern[7] = 0x00;

    // K
    f_data[10].width = 8;
    f_data[10].pattern[0] = 0x42;
    f_data[10].pattern[1] = 0x44;
    f_data[10].pattern[2] = 0x48;
    f_data[10].pattern[3] = 0x70;
    f_data[10].pattern[4] = 0x48;
    f_data[10].pattern[5] = 0x44;
    f_data[10].pattern[6] = 0x42;
    f_data[10].pattern[7] = 0x00;

    // L
    f_data[11].width = 8;
    f_data[11].pattern[0] = 0x40;
    f_data[11].pattern[1] = 0x40;
    f_data[11].pattern[2] = 0x40;
    f_data[11].pattern[3] = 0x40;
    f_data[11].pattern[4] = 0x40;
    f_data[11].pattern[5] = 0x40;
    f_data[11].pattern[6] = 0x7e;
    f_data[11].pattern[7] = 0x00;

    // M
    f_data[12].width = 8;
    f_data[12].pattern[0] = 0x42;
    f_data[12].pattern[1] = 0x66;
    f_data[12].pattern[2] = 0x5a;
    f_data[12].pattern[3] = 0x5a;
    f_data[12].pattern[4] = 0x42;
    f_data[12].pattern[5] = 0x42;
    f_data[12].pattern[6] = 0x42;
    f_data[12].pattern[7] = 0x00;

    // N
    f_data[13].width = 8;
    f_data[13].pattern[0] = 0x42;
    f_data[13].pattern[1] = 0x62;
    f_data[13].pattern[2] = 0x52;
    f_data[13].pattern[3] = 0x4a;
    f_data[13].pattern[4] = 0x46;
    f_data[13].pattern[5] = 0x42;
    f_data[13].pattern[6] = 0x42;
    f_data[13].pattern[7] = 0x00;

    // O
    f_data[14].width = 8;
    f_data[14].pattern[0] = 0x3c;
    f_data[14].pattern[1] = 0x42;
    f_data[14].pattern[2] = 0x42;
    f_data[14].pattern[3] = 0x42;
    f_data[14].pattern[4] = 0x42;
    f_data[14].pattern[5] = 0x42;
    f_data[14].pattern[6] = 0x3c;
    f_data[14].pattern[7] = 0x00;

    // P
    f_data[15].width = 8;
    f_data[15].pattern[0] = 0x7c;
    f_data[15].pattern[1] = 0x42;
    f_data[15].pattern[2] = 0x42;
    f_data[15].pattern[3] = 0x7c;
    f_data[15].pattern[4] = 0x40;
    f_data[15].pattern[5] = 0x40;
    f_data[15].pattern[6] = 0x40;
    f_data[15].pattern[7] = 0x00;

    // Q
    f_data[16].width = 8;
    f_data[16].pattern[0] = 0x3c;
    f_data[16].pattern[1] = 0x42;
    f_data[16].pattern[2] = 0x42;
    f_data[16].pattern[3] = 0x42;
    f_data[16].pattern[4] = 0x4a;
    f_data[16].pattern[5] = 0x44;
    f_data[16].pattern[6] = 0x3a;
    f_data[16].pattern[7] = 0x00;

    // R
    f_data[17].width = 8;
    f_data[17].pattern[0] = 0x7c;
    f_data[17].pattern[1] = 0x42;
    f_data[17].pattern[2] = 0x42;
    f_data[17].pattern[3] = 0x7c;
    f_data[17].pattern[4] = 0x48;
    f_data[17].pattern[5] = 0x44;
    f_data[17].pattern[6] = 0x42;
    f_data[17].pattern[7] = 0x00;

    // S
    f_data[18].width = 8;
    f_data[18].pattern[0] = 0x3c;
    f_data[18].pattern[1] = 0x42;
    f_data[18].pattern[2] = 0x40;
    f_data[18].pattern[3] = 0x3c;
    f_data[18].pattern[4] = 0x02;
    f_data[18].pattern[5] = 0x42;
    f_data[18].pattern[6] = 0x3c;
    f_data[18].pattern[7] = 0x00;

    // T
    f_data[19].width = 8;
    f_data[19].pattern[0] = 0x7e;
    f_data[19].pattern[1] = 0x18;
    f_data[19].pattern[2] = 0x18;
    f_data[19].pattern[3] = 0x18;
    f_data[19].pattern[4] = 0x18;
    f_data[19].pattern[5] = 0x18;
    f_data[19].pattern[6] = 0x18;
    f_data[19].pattern[7] = 0x00;

    // U
    f_data[20].width = 8;
    f_data[20].pattern[0] = 0x42;
    f_data[20].pattern[1] = 0x42;
    f_data[20].pattern[2] = 0x42;
    f_data[20].pattern[3] = 0x42;
    f_data[20].pattern[4] = 0x42;
    f_data[20].pattern[5] = 0x42;
    f_data[20].pattern[6] = 0x3c;
    f_data[20].pattern[7] = 0x00;

    // V
    f_data[21].width = 8;
    f_data[21].pattern[0] = 0x42;
    f_data[21].pattern[1] = 0x42;
    f_data[21].pattern[2] = 0x42;
    f_data[21].pattern[3] = 0x42;
    f_data[21].pattern[4] = 0x42;
    f_data[21].pattern[5] = 0x24;
    f_data[21].pattern[6] = 0x18;
    f_data[21].pattern[7] = 0x00;

    // W
    f_data[22].width = 8;
    f_data[22].pattern[0] = 0x42;
    f_data[22].pattern[1] = 0x42;
    f_data[22].pattern[2] = 0x42;
    f_data[22].pattern[3] = 0x5a;
    f_data[22].pattern[4] = 0x5a;
    f_data[22].pattern[5] = 0x66;
    f_data[22].pattern[6] = 0x42;
    f_data[22].pattern[7] = 0x00;

    // X
    f_data[23].width = 8;
    f_data[23].pattern[0] = 0x42;
    f_data[23].pattern[1] = 0x42;
    f_data[23].pattern[2] = 0x24;
    f_data[23].pattern[3] = 0x18;
    f_data[23].pattern[4] = 0x18;
    f_data[23].pattern[5] = 0x24;
    f_data[23].pattern[6] = 0x42;
    f_data[23].pattern[7] = 0x00;

    // Y
    f_data[24].width = 8;
    f_data[24].pattern[0] = 0x42;
    f_data[24].pattern[1] = 0x42;
    f_data[24].pattern[2] = 0x24;
    f_data[24].pattern[3] = 0x18;
    f_data[24].pattern[4] = 0x18;
    f_data[24].pattern[5] = 0x18;
    f_data[24].pattern[6] = 0x18;
    f_data[24].pattern[7] = 0x00;

    // Z
    f_data[25].width = 8;
    f_data[25].pattern[0] = 0x7e;
    f_data[25].pattern[1] = 0x02;
    f_data[25].pattern[2] = 0x04;
    f_data[25].pattern[3] = 0x08;
    f_data[25].pattern[4] = 0x10;
    f_data[25].pattern[5] = 0x20;
    f_data[25].pattern[6] = 0x7e;
    f_data[25].pattern[7] = 0x00;

    // User input processing
    char input[26];
    int values[26];
    char str[100]; // Buffer for the output string
    int count = 0;
    char c;

    printf("A~Zの文字を入力してください。終了するにはEnterを押してください:\n");

    // 文字の入力処理とアルファベットインデックスの計算と格納を行う
    while (count < 26 && (c = getchar()) != '\n')
    {
        if (isalpha(c))
        {                     // 変数cにアルファベットが入力された場合
            c = toupper(c);   // 小文字入力されたアルファベットを大文字に変換する
            input[count] = c; //
            values[count] = c - 'A';
            count++;
        }
    }

    // strにアルファベットインデックスを格納する
    int index = 0;
    for (int i = 0; i < count; i++)
    {
        if (i > 0)
        {
            str[index++] = ',';
        }
        index += sprintf(&str[index], "%d", values[i]);
    }
    str[index] = '\0';

    // 文字の表示
    print_vertical(count, values, f_data);
    print_horizontal(count, values, f_data); 
    print_verhori2(count, values, f_data);
    print_color(count, values, f_data, RED);
    print_color(count, values, f_data, GREEN);
    print_color(count, values, f_data, YELLOW);
    print_color(count, values, f_data, BLUE);
    print_color(count, values, f_data, MAGENTA);
    print_color(count, values, f_data, CYAN);
    print_colors(count, values, f_data);
    print_Italic(count, values, f_data);
    

    return 0;
}
