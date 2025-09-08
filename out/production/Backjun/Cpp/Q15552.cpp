#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); // 앞에 std:: 포함. C와 C++스타일 입출력 간의 동기화를 끊어버리는 명령어.
    cin.tie(NULL); //입력할때마다 출력버퍼를 비우는 작업을 막기 위함.

    int T; // 테스트 케이스 개수
    int a, b; //더할 것들.
    cin >> T;

    for(int i=0; i<T; i++){
        cin >> a>> b;
        cout << a+b<< '\n'; //endl 사용시 버퍼를 강제로 비우기에 줄바꿈 문자인 '\n'만 적용할 것.
    }

    return 0;

}


