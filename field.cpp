#include <iostream>

using namespace std;

int main() {
    int X11, X12, Y11, Y12,
        X21, X22, Y21, Y22,
        WR1, HR1, WR2, HR2,
        CR1X, CR2X, CR1Y, CR2Y,
        XINT1, YINT1, XINT2, YINT2,
        INTER, AR1, AR2, AT;

    cin >> X11 >> Y11 >> X12 >> Y12;
    cin >> X21 >> Y21 >> X22 >> Y22;
    
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

    else 
        INTER = 0;

    AR1 = WR1 * HR1;
    AR2 = WR2 * HR2;
    AT = AR1 + AR2 - INTER;

    cout << AT << endl;
} 

int max(int a, int b){
    int valmax;
    if(a < b){
        valmax = b;
    }
    else{
        valmax = a;
    }
    return valmax; 
}

int min(int a, int b){
    int valmin;
    if(a < b){
        valmin = a;
    }
    else{
        valmin = b;
    }
    return valmin; 
}
