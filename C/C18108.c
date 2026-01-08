//https://www.acmicpc.net/problem/18108

#include <stdio.h>

int year(int y);

int main(){
    int ky;
    scanf("%d" , &ky);
    printf("%d" , year(ky));
    return 0;
}

int year(int y){ return y - 543; }