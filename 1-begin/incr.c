#include <stdio.h> 

int incr(int x){
     x = x + 1; 
    return x;
}

int main(void){
    char c = 10;
    int a = 10;
    a = incr(a);
    float y= 1.234;
    printf("%x %d %f\n","sasso", a, y);
    return 0;
}