#include <iostream>
using namespace std;
int arr[11];
int dp[11];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 0; i < 11; i++) {
        if (i > 3) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << dp[arr[i]] << "\n";
    }
}