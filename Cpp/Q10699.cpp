#include <iostream>
#include <ctime> // 시간 출력을 위한 타임 헤더.
using namespace std;

//서울의 오늘 날짜를 출력하는 프로그램을 작성하시오.

int main(){
    time_t now = time(0); // 현재 시간 가져오기
    cout << now;

}

