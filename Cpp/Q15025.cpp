#include <iostream>

using namespace std;

/*
뿔 수가 양쪽 다 같으면 Even, 다르면 Odd, 둘 다 존재하지 않으면 무스가 아님이라고 출력.
가장 많은 개수의 뿔 *2만큼 출력
*/

int main(){
    int x, y;
    cin >> x >> y;
    if((x==0)&&(y==0)){
        cout << "Not a moose";
    } else if(x==y){
        cout <<"Even " << x+y <<endl;
    } else {
         int max_horns = (x>y) ? x: y; // 삼항 연산자. x가 크면 x를, y가 크면 y를 max_horns에 넣는다.
        cout << "Odd "<< max_horns * 2 << endl;
    }
   
    return 0;
}
    