#include <iostream>
#include <math.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int n;
    cin >> n;
    forn(i, n) {
        string a,b;
        cin >> a;
        cin >> b;
        int sizeA = a.size();
        int sizeB = b.size();
        char endA = a[a.size()-1];
        char endB = b[b.size()-1];
        if (endA < endB) cout << ">" <<endl;
        else if (endA > endB) cout << "<"<<endl;
        else{
            if ((sizeA > sizeB && endA == 'L') ||(sizeA < sizeB && endA == 'S') ) cout << ">" <<endl;
            else if ((sizeA < sizeB && endA == 'L')||(sizeA > sizeB && endA == 'S')) cout << "<" <<endl;
            else cout << "=" <<endl;
        }
     
    }
}