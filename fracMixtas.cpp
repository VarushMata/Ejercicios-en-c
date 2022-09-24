#include <iostream>

using namespace std;

int main() {

    int den, num, res, fact;
    cin >> num >> den;
    res = num / den;
    fact = num % den;
    if (fact == 0)
    {
        cout << res << endl;
    }
    else if (num < den)
    {
        cout << fact << "/" << den << endl;
    }
    else
    {
        cout << res << " " << fact << "/" << den << endl; 
    }
    return 0;
}