#include <iostream>

using namespace std;

int main() {
    int hour, min, cook_time;

    cin >> hour >> min >> cook_time;

    hour = hour + (min + cook_time) / 60;
    min += cook_time;

    if (min >= 60) {
        if (hour >= 24) cout << hour % 24 << " " << min % 60;
        else cout << hour << " " << min % 60;
    } else cout << hour << " " << min;

    return 0;
}