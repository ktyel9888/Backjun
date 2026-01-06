//https://www.acmicpc.net/problem/10869

#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multi(int a, int b);
int divide(int a, int b);
int modula(int a, int b);

int main (){
    int A;
    int B;

    scanf("%d %d", &A, &B);
    printf("%d\n" , add(A,B));
    printf("%d\n" , subtract(A,B));
    printf("%d\n" , multi(A,B));
    printf("%d\n" , divide(A,B));
    printf("%d\n" , modula(A,B));

    return 0;
}

int add(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int multi(int a, int b){
    return a*b;
}

int divide(int a, int b){
    return a/b;
}

int modula(int a, int b){
    return a%b;
}

