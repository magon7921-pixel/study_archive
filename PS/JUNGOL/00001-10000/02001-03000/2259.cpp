#include <iostream>
#include <cmath>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dir[4], len[4];
    int K;
    int dump;

    cin >> K;

    for (int i = 0; i < 2; i++)
        cin >> dir[i] >> len[i];
    
    cin >> dump >> dump;

    for (int i = 2; i < 4; i++)
        cin >> dir[i] >> len[i];

    if (dir[0] - dir[3] == 0 || dir[1] - dir[2] == 0)
        cout << (len[0] * len[1] + len[2] * len[3]) * K;
    else
        cout << abs(len[0] * len[1] - len[2] * len[3]) * K;
    
    return 0;
}