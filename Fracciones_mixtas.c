// Programa que lee dos numeros enteros separados por un espacio (NUMERADOR DENOMINADOR)
// Y da como resultado la fracción mixta (si es que existe), el número entero o la fracción
#include <stdio.h>
#include <stdlib.h>

int main(){
    int den, num, res, fact;
    scanf("%d %d", &num, &den);
    res = num / den;
    fact = num % den;
    if(fact == 0){
        printf("%d", res);
    }
    else if (num < den)
    {
        printf("%d/%d", fact, den);
    }
    else{
        printf("%d %d/%d", res, fact, den);
    }
    fflush(stdin);
    getchar();
    return 0; 
}