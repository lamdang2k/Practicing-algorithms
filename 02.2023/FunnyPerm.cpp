#include <iostream>
#include <math.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int n;
    cin >> n;
    forn(i, n) {
        int number;
        cin >> number;
        if (number == 1) cout<< "1"<<endl;
        else if (number == 2) cout<< "2 1"<<endl;
        else if (number == 3) cout<< "-1"<<endl;
        else if (number == 4) cout<< "4 3 1 2"<<endl;
        else{
            for (int i = number; i > number/2 +1; i--) cout << i << " ";
            for(int i = 1;i<= number/2+1;i++) cout << i << " ";
            cout << endl;
        }
    }
}