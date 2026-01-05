#include <stdio.h>


// https://www.acmicpc.net/problem/1010

int memo[31][31]; 
/*
[메모이제션이란?]
- 동일한 계산을 반복해야 할때, 이전에 계산한 값을 메모리에 저장해 두었다가 재사용하는 기법
- 중복 계산을 제거하여 실행 속도를 획기적으로 줄이는 것.

[작동 알고리즘]
1. 계산하려는 값이 배열에 있는지 확인
2. 값이 있다면(0이 아니라면), 그 값을 바로 리턴. -> base 조건 설정.
3. 값이 없다면, 계산을 수행한 뒤 배열에 저장하고 리턴.
*/

int comb(int n,int m);

int main (){
    int count; // 테스트 케이스 개수
    
    // 0<N<=M<30

    scanf("%d", &count);
    for(int i=0; i<count; i++){
        int N; // 서쪽 사이트 개수 (정수꼴)
        int M; // 동쪽 사이트 개수 (정수꼴)
        scanf("%d %d", &N, &M);
        printf("%d\n" , comb(N,M));
    }
    
    return 0;
}

int comb(int n, int m){
    if(n==m || n == 0) return 1;// n하고 m이 같을 시, 다 뽑는 경우로 1가자.
    
    if(memo[m][n]>0){ //이전에 계산을 했다면 이걸로 꺼내 쓰자.
        return memo[m][n];
    }

    
    memo[m][n] = comb(n-1, m-1) + comb(n, m-1); // 계산이 안되어있다면, 계산 후 저장하자.
    return memo[m][n];
}