#include <iostream>

using namespace std;

int main() {
    int n;
    int pieces, s;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> pieces >> s;
        cout << "You get " << pieces / s << " piece(s) and your dad gets " << 
        pieces % s << " piece(s)." << '\n';
    }

    return 0;
}