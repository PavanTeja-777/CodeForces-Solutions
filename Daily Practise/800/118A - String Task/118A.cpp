#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' ||
           c == 'o' || c == 'u' || c == 'y';
}

int main() {
    string s;
    cin >> s;

    string ans;

    for (char c : s) {
        c = tolower(c);
        if (!isVowel(c)) {
            ans += '.';
            ans += c;
        }
    }

    cout << ans << '\n';
    return 0;
}