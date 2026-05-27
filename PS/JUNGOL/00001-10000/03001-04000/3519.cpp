#include <iostream>
#include <vector>

using namespace std;

void merge_sort(vector<int> &A, int low, int high) {
    if (low >= high)
        return;
    
    int mid = (high + low) / 2;
    merge_sort(A, low, mid);
    merge_sort(A, mid + 1, high);

    int i = low;
    int j = mid + 1;
    vector<int> B(high + 1);

    for (int k = low; k <= high; k++) {
        if (j > high)
            B[k] = A[i++];
        else if (i > mid)
            B[k] = A[j++];
        else if (A[i] < A[j])
            B[k] = A[i++];
        else
            B[k] = A[j++];
    }

    for (int k = low; k <= high; k++)
        A[k] = B[k];

    for (const auto i: A)
        cout << i << ' ';
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;

    cin >> n;

    vector<int> A(n);

    for (auto &i: A)
        cin >> i;

    merge_sort(A, 0, n - 1);

    return 0;
}
