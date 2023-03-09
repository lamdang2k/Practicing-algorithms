#include <iostream>
#include <vector> 
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main(){
    int t,n;
    cin >> t;
    forn(i,t){
        cin>>n;
        int arr[n];
        int count_1=0;
        forn(j,n){
            cin>>arr[j];
            if(arr[j]==1)++count_1;
        }cout<< (int)(count_1+1)/2 + n - count_1<<endl;
    }  
    return 0;
}