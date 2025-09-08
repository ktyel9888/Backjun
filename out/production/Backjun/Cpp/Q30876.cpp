#include <iostream>
#include <vector>

using namespace std;
vector<int> south(2); // stack 방식으로 작동하는 것을 기억할것!!

int main(){
    int count; // 입력 값(역) 개수.
    cin >> count;

    for(int i=0; i<count; i++){
        int x,y;
        cin >> x >> y;
        
        if(i==0){ 
            south[0]= x;
            south[1] = y;
        }

        /*
        if(south[0]&& south[1]==0){
            south[0]= x;
            south[1] = y;
            해당 식으로 하려 했으나, 만약 모든 y값이 0 이상이면 0,0으로 밖에 안 읽는 의도하지 않은 설계 작동!
            */

        else if(south[1]>y){ // 조건대로 최남쪽에 있는 역을 탐색.
           south[0]=x;
           south[1]=y;
       }
    }
    cout << south[0] << " "<< south [1];
}