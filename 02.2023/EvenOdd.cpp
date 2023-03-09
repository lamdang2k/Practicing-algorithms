#include <iostream>
#include<vector>
#include<map>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    long long n,t,q,elem,value;
    int type;
    cin >> t;
    forn(i, t) {
        long long sum = 0;
        int countEven = 0;
        int countOdd = 0;
        cin >> n;
        cin >> q;
        forn(j,n){
            cin>>elem;
            if(elem%2) ++countOdd;
            else ++countEven;
            sum += elem;
        }
        forn(j,q){
            cin>>type;
            cin>>value;
            if(type==0) 
            {
                sum+=countEven*value;
                if(value%2){
                    countOdd+=countEven;
                    countEven = 0;
                }
            }else{
                sum+=countOdd*value;
                if(value%2){
                    countEven+=countOdd;
                    countOdd =0;
                }
            } 
            cout<<sum<<endl;
        }       
    }
}