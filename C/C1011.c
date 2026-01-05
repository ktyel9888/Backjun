#include <stdio.h>
#include <stdlib.h> // malloc, free를 쓰기 위해 꼭 필요!

// 핵심 알고리즘 함수 
int warp(int x, int y) {
    long long dist = (long long)y - x; // 거리 계산
    long long move = 1;
    int count = 0;

    while (dist > 0) {
        // 1. 출발하는 쪽 이동
        dist = dist - move;
        count++;
        if (dist <= 0) break;

        // 2. 도착하는 쪽 이동
        dist = dist - move;
        count++;
        if (dist <= 0) break;

        move++; // 양쪽 다 이동했으면 속도 증가
    }
    return count;
}

int main(void) {
    int tcount;
    // 1. 테스트 케이스 개수 입력
    if (scanf("%d", &tcount) != 1) return 0;

    // 2. 정답을 저장해둘 메모리 공간(배열) 만들기
    // tcount 개수만큼의 int 방을 만듭니다.
    int* results = (int*)malloc(sizeof(int) * tcount);

    // 3. [입력 단계] 모든 테스트 케이스를 입력받고 계산해서 '저장'만 함
    for (int i = 0; i < tcount; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        results[i] = warp(x, y); // 바로 출력하지 않고 배열에 넣음
    }

    // 4. [출력 단계] 저장해둔 정답들을 한꺼번에 출력
    for (int i = 0; i < tcount; i++) {
        printf("%d\n", results[i]);
    }

    // 5. 메모리 해제 (뒷정리)
    free(results);

    return 0;
}