#include <stdio.h>
#include <stdlib.h>
int max(int num1,int num2);
int min(int num1, int num2);
int main() {
    int X11, X12, Y11, Y12,
        X21, X22, Y21, Y22,
        WR1, HR1, WR2, HR2,
        CR1X, CR2X, CR1Y, CR2Y,
        XINT1, YINT1, XINT2, YINT2,
        INTER, AR1, AR2, AT;
    scanf("%d %d %d %d", &X11, &Y11, &X12, &Y12);
    scanf("%d %d %d %d", &X21, &Y21, &X22, &Y22);
    WR1 = abs(X12 - X11);
    HR1 = abs(Y12 - Y11);

    WR2 = abs(X22 - X21);
    HR2 = abs(Y22 - Y21);

    CR1X = (X12 + X11)/2;
    CR1Y = (Y12 + Y11)/2;

    CR2X = (X22 + X21)/2;
    CR2Y = (Y22 + Y21)/2;

    if ((abs(CR2X - CR1X) <= ((WR1/2) + (WR2/2))) && (abs(CR2Y - CR1Y) <= ((HR1/2) + (HR2/2)))) {
        XINT1 = max(X11, X21);
        YINT1 = max(Y11, Y21);
        XINT2 = min(X12, X22);
        YINT2 = min(Y12, Y22);
        INTER = abs(XINT2 - XINT1) * abs(YINT2 - YINT1);
    }

    else {
        INTER = 0;
    }

    AR1 = WR1 * HR1;
    AR2 = WR2 * HR2;
    AT = AR1 + AR2 - INTER;

    printf("%d", AT);
    // printf("\n%d %d %d %d",XINT1, YINT1, XINT2, YINT2);
}

int max(int num1, int num2){
    int valmax;
    if(num1 < num2){
        valmax = num2;
    }
    else{
        valmax = num1;
    }
    return valmax; 
}

int min(int num1, int num2){
    int valmin;
    if(num1 > num2){
        valmin = num2;
    }
    else {
        valmin = num1;
    }
    return valmin; 
}