//https://www.acmicpc.net/problem/10430

#include <stdio.h>

int remain1(int A ,int B, int C); //(A+B)%C
int remain2(int A ,int B, int C); //((A%C) + (B%C))%C
int remain3(int A ,int B, int C); //(A×B)%C
int remain4(int A ,int B, int C); //((A%C) × (B%C))%C

int main () {
    int A, B, C;

    scanf("%d %d %d" ,&A, &B, &C);
    printf("%d\n", remain1(A,B,C));
    printf("%d\n", remain2(A,B,C));
    printf("%d\n", remain3(A,B,C));
    printf("%d\n", remain4(A,B,C));
    return  0;
}

int remain1(int A ,int B, int C){ return (A+B)%C; }
int remain2(int A ,int B, int C){ return ((A%C) + (B%C))%C; }
int remain3(int A ,int B, int C){ return (A*B)%C; }
int remain4(int A ,int B, int C){ return ((A%C) * (B%C))%C; }