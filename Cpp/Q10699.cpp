#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime> // 시간 출력을 위한 타임 헤더.
#include <cstdio> // printf를 사용하기 위한 헤더.

using namespace std;

//서울의 오늘 날짜를 출력하는 프로그램을 작성하시오.

int main() {
    time_t now = time(0); // 현재 시간 가져오기
    struct tm* t = localtime(&now);
    printf("%d-%02d-%02d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday); 
    return 0;
}


