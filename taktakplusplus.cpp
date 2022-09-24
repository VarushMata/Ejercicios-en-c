// Problema del tak tak tree, introduce la cantidad de frutos existentes
// y cuenta las noches para que alcance de forma equitativa(-1) entre 11 perso
#include <iostream>
#include <math.h>

using namespace std;

int main(){
   int frut, noches, numfrut = 0;
   cin >> frut;
   for (int i = 0; i < 200; i++)
   {
        numfrut += frut * pow(2, i);
        if ((numfrut - 1) % 11 == 0)
        {
            noches = i;
            break;
        }
        else {
            numfrut = 0;
        }
   }
   cout << noches << " " << numfrut << endl;
   
}