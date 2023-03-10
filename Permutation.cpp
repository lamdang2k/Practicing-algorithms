#include <iostream>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int t,n;
    cin >> t;
    forn(i,t){
        cin>>n;
        int arr[n][n-1];
        int res[n];
        int count[n+1]={0};
        forn(j,n){
            forn(k,n-1){
                cin>>arr[j][k];
                if (k==0) count[arr[j][k]]++;
            }
        }forn(j,n+1){
            if(count[j]==n-1){
                res[0]=j;
                break;
            }
        }forn(j,n){
            if(arr[j][0]!=res[0]){
                forn(k,n-1){
                    res[k+1] = arr[j][k];
                }
            }
        }forn(j,n){
            cout<<res[j]<<" ";
        } cout<<endl;
    }  
    return 0;
}