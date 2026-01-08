//https://www.acmicpc.net/problem/10926

#include <stdio.h>

int main(){
    char input[51];
    scanf("%s", input);
    printf("%s\?\?!" , input); // trigraph오류가 나니 꼭 백슬래시를 부호 앞에 넣을것!
}