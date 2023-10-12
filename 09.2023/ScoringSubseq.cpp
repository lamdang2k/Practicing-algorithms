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
        forn(j,n){
            cin>>arr[j];
        }
        vector<int> res;
        for(int i = 0; i < n; i++){
			int l = 1, r = i + 1;
			while(l <= r){
				int m = (l + r) / 2;
				if(arr[i - m + 1] >= m){
					l = m + 1;
				}else{
					r = m - 1;
				}
			}
			res.push_back(r);
		}
        for(auto i:res){
            cout<<i<<" ";
        }cout<<endl;
    }  
    return 0;
}