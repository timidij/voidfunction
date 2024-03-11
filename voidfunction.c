#include <stdio.h>
void sumN(int a, int b);

int main(){
    int a = 4;
    int b = 5;

sumN(a,b);
return 0;
}
void sumN(int x, int y){
printf("sum = %d", x+y);
}
