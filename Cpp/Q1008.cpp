#include <iostream>
using namespace std;

// 문제에서는 10^-9의 오차이내의 소숫점을 원함. 따라서 printf로 .9f로 조정해야함. cout으로 조정가능한지 공부할것.
int main(){
    int A,B;
    cin >> A >>B;
    printf("%.9f\n", double(A)/double(B)); // 꼭 소수점을 만들어야할때는 답 뿐만 아니라 매개변수들도 자료형을 변환할것!

}