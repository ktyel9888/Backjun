#define _CRT_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			cout << a[i];
		}
	}
    return 0;
}