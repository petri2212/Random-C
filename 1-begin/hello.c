#include <stdio.h> // preprocessore, appunto esegue prima queta riga, poi viene compilato il file

int sum(int a, int b){
    return a+b;
}


int main(void){
    printf("hello world %d %d\n", sum(10,20));

    return 0;
}