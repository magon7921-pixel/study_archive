#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class my_stack {
private:
    vector<T> data;

public:
    my_stack() { }
    
    void push() {
        T n;
        cin >> n;
        data.push_back(n);
    }

    void pop() {
        if (data.size() != 0) {
            cout << data[data.size() - 1] << '\n';
            data.pop_back();
        } else cout << -1 << '\n';
    }

    void _size() { cout << data.size() << '\n'; }

    void empty() { cout << ((data.size() == 0) ? 1 : 0) << '\n'; }

    void top() { cout << ((data.size() == 0) ? -1 : data[data.size() - 1]) << '\n'; }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string command;
    my_stack<int> stack;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> command;

        if (command == "push") stack.push();
        else if (command == "pop") stack.pop();
        else if (command == "size") stack._size();
        else if (command == "empty") stack.empty();
        else if (command == "top") stack.top();
    }

    return 0;
}
