/*#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < 32; i++) {
        if (n & (1 << i)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}*/


/*
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 31; i >= 0; i--) {
        if (n & (1 << i)) {
            cout << "1";
        } else {
            cout << "0";
        }
    }
    cout << endl;
    return 0;
}*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += arr[i];
            }
        }
        if (sum % k == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
