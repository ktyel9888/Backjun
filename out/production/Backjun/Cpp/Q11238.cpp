#include <iostream>
#include <clocale> //setlocale를 사용하기 위한 헤더.

using namespace std;

int main(){
    setlocale(LC_ALL,""); //C++의 입출력 스트림이 시스템의 언어설정을 따르도록 설정. wcin/wcout을 한글 깨뜨리지 않고 처리.
    wchar_t hangul_char;

    wcin>>hangul_char;
    long long result = (long long)hangul_char - L'가' +1;
    cout << result<<endl;

}

/* 백준에서는 setlocale 안 먹어요..
#include <iostream>
#include <string>
#include <vector>

int main() {
    // C++ 표준 입출력 속도 향상 (wcin과 달리 cin은 효과를 받습니다)
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s;
    std::cin >> s;

    // UTF-8 바이트를 유니코드 코드 포인트로 직접 변환
    // '가'는 3바이트 문자이므로 s[0], s[1], s[2]를 사용합니다.
    // unsigned char로 변환하여 비트 연산을 안전하게 수행합니다.
    unsigned char b1 = s[0];
    unsigned char b2 = s[1];
    unsigned char b3 = s[2];

    // 비트 연산을 통해 3바이트를 하나의 숫자로 조합합니다.
    // 1. 첫 바이트에서 앞의 4비트(1110)를 제외 (b1 & 0x0F) 0000 1111에서 둘다 1일때만 12칸 넘긴다.
    // 2. 두 번째 바이트에서 앞의 2비트(10)를 제외 (b2 & 0x3F) 0011 1111에서 둘다 1일때만 6칸 넘긴다.
    // 3. 세 번째 바이트에서 앞의 2비트(10)를 제외 (b3 & 0x3F) 0011에서 1111에서 둘다 1일것을 걸러낸다.
    // 4. 각 부분을 올바른 위치로 비트 시프트(<<)하여 합칩니다. |를 사용.
    int code_point = ((b1 & 0x0F) << 12) | ((b2 & 0x3F) << 6) | (b3 & 0x3F);

    // 기존의 논리와 동일하게 '가'의 유니코드 값(0xAC00)을 빼고 1을 더합니다.
    long long result = code_point - 0xAC00 + 1;

    std::cout << result << std::endl;

    return 0;
}
*/