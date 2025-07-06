#include <iostream>

using namespace std;

int main() {

    /*int n;
    cin >> n;
    int mas[n];
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    for (int i = n-1; i >= 0; i--) {
        cout << mas[i] << " ";
    }*/





    /*int n;
    int max_pos = 0;
    int min_pos = 0;
    cin >> n;
    int mas[n];
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    int max = mas[0];
    int min = mas[0];
    for (int i = 0; i < n; i++) {
        if (mas[i] >= max) {
            max = mas[i];
            max_pos = i;
        }
        if (mas[i] <= min) {
            min = mas[i];
            min_pos = i;
        }
    }
    cout << min << " " << min_pos+1 << " " << max << " " << max_pos+1;*/










    /*int n;
    cin >> n;
    int mas[n];
    int chet = 0;
    int nechet = 0;
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    for (int i = 0; i < n; i++) {
        if (mas[i] % 2 == 0) {
            chet++;
        }
        else {
            nechet++;
        }
    }
    cout << chet << " " << nechet;*/




    /*int n;
    int k;
    cin >> n >> k;
    int mas[n];
    for (int i = 0; i < n; i++) {
        cin >> mas[(i+k)%n];
    }
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }*/




    /*int n;
    cin >> n;
    int mas[n];
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mas[j] > mas[j+1]) {
                int s = mas[j];
                mas[j] = mas[j+1];
                mas[j+1] = s;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }*/

    return 0;
}