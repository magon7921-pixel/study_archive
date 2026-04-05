#include <iostream>
#include <deque>
#include <string>

using namespace std;

template <typename T>
class my_que {
private:
    deque<T> data;

public:
    my_que() { }
    
    void push() {
        T n;
        cin >> n;
        data.push_back(n);
    }

    void pop() {
        if (data.size() != 0) {
            cout << data.front() << '\n';
            data.pop_front();
        } else cout << -1 << '\n';
    }

    void _size() { cout << data.size() << '\n'; }

    void empty() { cout << ((data.size() == 0) ? 1 : 0) << '\n'; }

    void front() { cout << ((data.size() == 0) ? -1 : data.front()) << '\n'; }

    void back() { cout << ((data.size() == 0) ? -1 : data.back()) << '\n'; }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string command;
    my_que<int> que;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> command;

        if (command == "push") que.push();
        else if (command == "pop") que.pop();
        else if (command == "size") que._size();
        else if (command == "empty") que.empty();
        else if (command == "front") que.front();
        else if (command == "back") que.back();
    }

    return 0;
}
