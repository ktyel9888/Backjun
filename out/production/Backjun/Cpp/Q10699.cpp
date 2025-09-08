#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime> // 시간 출력을 위한 타임 헤더.
#include <cstdio> // printf를 사용하기 위한 헤더.

using namespace std;

//서울의 오늘 날짜를 출력하는 프로그램을 작성하시오.

int main() {
    time_t now = time(0); // 현재 시간 가져오기
    struct tm* t = localtime(&now); // 구조체 tm* t 로 now에서 localtime을 통해 가져온다. 유닉스 타임(1970년 1월 1일 0시 0분부터 센다!
    printf("%d-%02d-%02d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday); // 년은 1900을 더할 것!, 월은 꼭 1을 더할 것!
    return 0; 
}


