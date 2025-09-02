#include <iostream>
#include <vector>


using namespace std;
vector<int> code(8); //0,1, 9로 이루어진 코드 8자리 받기.

int main(){
    string answer = "S"; // 9가 없다면 S 그대로 출력.
    for(int i=0; i<code.size(); i++){
        cin >> code[i];
        if(code[i]==9) answer = "F"; // 만약 코드 순환 중 9를 찾았다면 F 출력.
    }
    cout << answer;
    return 0;
}