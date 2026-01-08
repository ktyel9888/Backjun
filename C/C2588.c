//https://www.acmicpc.net/problem/2588

#include <stdio.h>

int multi1(int a, int b);
int multi2(int a, int b);
int multi3(int a, int b);

int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", multi1(a,b));
    printf("%d\n", multi2(a,b));
    printf("%d\n", multi3(a,b));
    printf("%d\n", a*b);

    return 0;
}

int multi1(int a, int b){ return a * (b%10);}
int multi2(int a, int b){ return a * ((b%100)/10);}
int multi3(int a, int b){ return a * (b/100);}