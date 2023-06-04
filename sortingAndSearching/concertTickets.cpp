#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m, q;
    cin >> n>> m;
    vector<int> h(n);
    for( int &i: h){
        cin >> i;
        i *= -1;
    }
    multiset<int> ms(h.begin(), h.end()); 
    while(m--){
        cin >> q;
        auto value = ms.lower_bound(-q);
        if(value == ms.end()){
            cout << -1 << "\n";
        }else{
            cout << -(*value) << "\n";
            ms.erase(value);
        }
        
    }
    return 0;
}