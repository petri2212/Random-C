#include <stdio.h> // preprocessore, appunto esegue prima queta riga, poi viene compilato il file

int sum(int a, int b){
    return a+b;
}


int main(void){
    int a = 10;
    int b = 20;
    int c = a + b;
    printf("hello world %d %d\n", c);
    return 0;
}