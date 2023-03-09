#include <iostream>
#include<set>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int t,n;
    string s;
    char c;
    cin >> t;
    forn(i, t) {
        int result=0;
        cin >> n;
        cin >> c;
        cin >> s;
        if (c=='g')result = 0;
        else{
            set<int> green, cset;
            forn(j,n){
                if(s[j]==c) cset.insert(j);
                else if (s[j]=='g') green.insert(j);
            }
            auto it = green.end();
            it--;
            int lastGreen = *it;
            int firstGreen =*(green.begin());
            //cout<<"firstGreen: "<<firstGreen<<endl;
            for(auto e:cset){
                int dist = 0;
                int pivot = e;
                if (pivot > lastGreen) dist = firstGreen+n-pivot;
                else{
                    auto itG = green.begin();
                    int currentGreen = *itG;
                    while (currentGreen<pivot && itG!=green.end()){
                        ++itG;
                        currentGreen=*itG;
                        //cout<<"in loop"<<endl;
                    }
                    dist = (currentGreen - pivot);
                }
                //cout<<"dist: "<<dist<<endl;
                result = (dist >result) ? dist: result;
            }
        }            
        cout<<result<<endl;
    }
}