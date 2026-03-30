#include <iostream>
#include <vector>

using namespace std;

void pasting_paper(int x, int y, vector<vector<int>>& area);

int main() {
    int paper_count;
    int black_area = 0;
    int x_pos, y_pos;
    vector<vector<int>> area(100, vector<int>(100, 0));

    cin >> paper_count;

    for (int i = 0; i < paper_count; i++) {
        cin >> x_pos >> y_pos;

        pasting_paper(x_pos, y_pos, area);
    }

    for (int i = 0; i < 100; i++) {

        for (int j = 0; j < 100; j++) {
            black_area += area[i][j];
        }
    }

    cout << black_area;

}

void pasting_paper(int x, int y, vector<vector<int>>& area) {

    for (int i = x; i < x + 10 && i < 100; i++) {

        for (int j = y; j < y + 10 && j < 100; j++) {
            area[i][j] = 1;
        }
    }
}