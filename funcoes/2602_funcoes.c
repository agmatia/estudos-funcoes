#include <stdio.h>
#include <stdlib.h>

int quadr(int num){
int result;
    result = num * num;
    return result;
}

int main(){

    int x = quadr(5);
    printf("x = %d \n", x);
}
