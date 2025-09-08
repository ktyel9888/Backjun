/*입력은 3행으로, A씨와 B씨, C씨의 출근시간과 퇴근시간을 준다.
시간은 각각 공백으로 구분된 3개의 정수로 쓰여져있다.
3 개의 정수 h(7 ≦ h ≦ 22), m(0 ≦ m ≦ 59), s(0 ≦ s ≦ 59)는 h시 m 분 s 초를 나타낸다.
*/

#include <iostream>

using namespace std;
int main(){

    int result_h[3];
    int result_m[3];
    int result_s[3];

    for(int i=0; i<3; i++){
        int h1, m1, s1, h2, m2, s2;
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
        int start_seconds = h1 *3600 + m1*60+ s1;
        int end_seconds = h2 *3600 + m2*60 +s2;
        int working_seconds = end_seconds - start_seconds;

         result_h[i] = working_seconds /3600;
         result_m[i] = (working_seconds %3600) /60;
         result_s[i] = working_seconds % 60;
    }
     for (int i = 0; i < 3; ++i) {
        std::cout << result_h[i] << " " << result_m[i] << " " << result_s[i] << "\n";
    }

    return 0;
}

