#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cur, bef;
    int cnt = 1;
    int n;

    cin >> n >> bef;

    for (int i = 0; i < n - 1; i++) 
    {
        cin >> cur;

        if (cur >= bef) cnt++;

        bef = cur;
    }

    cout << cnt;

    return 0;
}