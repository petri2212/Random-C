#include <stdio.h> // preprocessore, appunto esegue prima queta riga, poi viene compilato il file

//int x = 0;

int sum(int a, int b){
    return a+b;
}

int incr(void){
    static int x = 0; // var globale dal punto di vista vita, ma locale dal punto di vista della visibilità 
     x = x + 1; 
    printf("%d\n", x);
}

int main(void){
    incr();
       incr();
          incr();
    return 0;
}

int main1(void){
    int a = 10;
    int b = 20;
    int c = a + b;
    printf("hello world %d %d\n", c);
    return 0;
}