#include <iostream>
#include <math.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int n,nbCuts;
    cin >> n;
    forn(i, n) {
        int m,pivot;
        double interval,a_n;
        nbCuts=0;
        cin >> m;
        cin >> pivot;
        interval = 2*pivot-1;
        forn (i,m-1){
            cin >> a_n;
            if(a_n>interval) {
                cout<< "cut: "<<ceil(a_n/interval) <<endl;
                int cut = ceil(a_n/interval) -1.0;
                nbCuts = nbCuts + cut;
            }
        }
        cout << nbCuts << endl;
    }
}