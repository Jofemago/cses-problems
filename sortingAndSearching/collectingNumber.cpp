#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
 
int main(){
 
    int n;
    cin >> n;
    vector<ii> v(n);
 
    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        v[i] = ii(aux,i);
        
    }
 
    sort(v.begin(), v.end());
 
    int res = 1, idx=-1;
    for(int i = 0; i < n; i++){
        if(idx > v[i].second){
            res++;
        }
        idx = v[i].second;
    }
 
    cout << res << "\n";
 
    return 0;
}