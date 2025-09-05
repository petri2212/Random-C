#include <stdio.h> // preprocessore, appunto esegue prima queta riga, poi viene compilato il file

int sum(int a, int b){
    return a+b;
}

int incr(void){
    int x = 1;
    x = x + 1; 
    printf("%d\n", x);
}

int main(void){

    printf("hello world \n");
    return 0;
}

int main1(void){
    int a = 10;
    int b = 20;
    int c = a + b;
    printf("hello world %d %d\n", c);
    return 0;
}