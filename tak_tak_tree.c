// Problema del tak tak tree, introduce la cantidad de frutos existentes
// y cuenta las noches para que alcance de forma equitativa(-1) entre 11 perso
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(){
    int frut, noches, numfrut = 0;
    scanf("%d", &frut);
    for (int i = 0; i < 200; i++)
    {
        numfrut += frut * pow(2, i);
        if((numfrut - 1) % 11 == 0){
            noches = i;
            break;
        }
        else{
            numfrut = 0;
        }
    }
    printf("%d %d", noches, numfrut);
}