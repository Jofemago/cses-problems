#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    multiset<int> s;
 
    while(n--){
        int aux;
        cin >> aux;
        auto ub = s.upper_bound(aux);
        if(ub != s.end()){
            s.erase(ub);
        }
        s.insert(aux);
    }
    cout << s.size() << '\n';
    return 0;
}