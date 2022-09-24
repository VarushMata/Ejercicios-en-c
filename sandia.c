#include <stdio.h>
#include <stdlib.h>

int main() {
    int kilos;
    scanf("%d", &kilos);
    if (kilos == 2 || kilos == 1 || kilos == 0)
    {
        printf("NO");
    }
    else
    {
        if (kilos % 2 == 0)
        {
            printf("SI");
        }
        else
        {
            printf("NO");
        }
    }
    fflush(stdin);
    getchar();
    return 0;
}