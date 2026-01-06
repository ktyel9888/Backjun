//https://www.acmicpc.net/problem/10998

#include <stdio.h>



int multi (int A, int B);

int main (){
    int A;
    int B;
    scanf("%d %d" , &A, &B);
    printf("%d" , multi(A,B));
    return 0;

}

int multi (int A, int B){
    return A * B;
}