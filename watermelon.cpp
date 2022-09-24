#include <iostream>

using namespace std;

int main() {
    int kilos;
    cin >> kilos;
    if (kilos == 2 || kilos == 1 || kilos == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (kilos % 2 == 0)
        {
            cout << "SI" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}