#include <stdio.h>
#include <stdlib.h>

int bissexto(int num);

void main(){
int ano, teste = 0;

    printf("Informe o ano: ");
    scanf("%d", &ano);

    teste = bissexto(ano);
}

int bissexto(int num){
int teste;

    if(num%4 == 0 || (num%100 == 0 && num%400 != 0)){
        teste = 1;
        printf("\nBissexto: %d", teste);
    }else{
        teste = 0;
        printf("\nNao Bissexto: %d", teste);
    }
    return teste;
}
