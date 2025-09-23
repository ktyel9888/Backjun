#include <iostream>

using namespace std;

int main() {
    int left, right;
    while (true) { // 0 , 0이 나올 때까지 무한 반복. 
        cin >> left >> right;

        if (left == 0 && right == 0) {
            break;
        }

        if (left > right) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}