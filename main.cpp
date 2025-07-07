#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int mas[n];
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    for (int i = 0; i < x; i++) {
        int left;
        int right;
        cin >> left >> right;
        int cnt = 0;
        for (int j = left; j <= right; j++) {
            cnt += mas[j-1];
        }
        cout << cnt << endl;
    }

    return 0;
}