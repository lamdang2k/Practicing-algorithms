#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int n;
    cin >> n;
    forn(i, n) {
        int m;
        cin >> m;
        int maxOfMin= (m<6)? 0 : (int) (m/3)-2;
        cout << maxOfMin << endl;
    }
}