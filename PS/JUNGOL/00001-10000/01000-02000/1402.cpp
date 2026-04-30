#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num, cnt;
    int result;

    cin >> num >> cnt;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            result = i;
            cnt--;
        }
        
        if (!cnt)
            break;
    }

    if (cnt)
        result = 0;

    cout << result;

    return 0;
}
