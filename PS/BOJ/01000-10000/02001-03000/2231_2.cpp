#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int len = to_string(n).length();

    int ans = 0;

    int start = max(1, n - (len * 9));

    for (int i = start; i < n; i++) 
    {
        int sum = i;
        int temp = 1;

        while(temp > 0) 
        {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == n) {
            ans = i;
            break;
        }
    }

    cout << ans;

    return 0;
}