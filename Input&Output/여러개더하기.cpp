#include <iostream>

using namespace std;

int main() {
    int cnt;
    int a, b;
    int result[10];

    cin >> cnt;

    for(int i = 0; i < cnt; i++){
        cin >> a >> b; // a와 b를 하나씩 입력 받기
        result[i] = a+b;
    }

    for(int i = 0; i < cnt; i++){
        cout << result[i] << '\n';
    }

    return 0;
}
