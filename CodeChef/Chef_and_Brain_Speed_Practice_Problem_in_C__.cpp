#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;

    // If current speed (y) is strictly greater than threshold (x), print YES
    if (y > x) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}