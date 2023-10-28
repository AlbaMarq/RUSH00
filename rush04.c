#include "ft_putchar.c"

void rush04() {
    char matriz[3][6] = {
        "ABBBC",
        "B   B",
        "CBBBA"
    };

    int i = 0;
    int j;
    while(i < 3) {
        j = 0;
        while(j < 5) {
            ft_putchar(matriz[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}
