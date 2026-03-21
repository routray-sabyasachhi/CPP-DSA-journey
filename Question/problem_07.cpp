
// pattern searching problem (brute force algorithm)

#include <iostream>
using namespace std;

void findPattern(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == m) {
            cout << i << " ";
        }
    }
}

int main() {
    string text, pattern;

    cout << "Enter text: ";
    cin >> text;

    cout << "Enter pattern: ";
    cin >> pattern;

    findPattern(text, pattern);

    return 0;
}