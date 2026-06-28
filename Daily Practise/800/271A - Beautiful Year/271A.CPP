#include <iostream>
#include <set>
using namespace std;

int main() {
    int year;
    cin >> year;

    while (true) {
        year++;
        string s = to_string(year);

        set<char> st(s.begin(), s.end());

        if (st.size() == 4) {
            cout << year;
            break;
        }
    }

    return 0;
}