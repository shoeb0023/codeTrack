#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string a, b;

    cin >> a >> b;

    // 1. Print lengths
    cout << a.size() << " " << b.size() << endl;

    // 2. Print concatenated string
    cout << a + b << endl;

    // 3. Swap first characters
    swap(a[0], b[0]);

    // 4. Print modified strings
    cout << a << " " << b << endl;

    return 0;
}


