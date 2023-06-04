#include <bits/stdc++.h>
using namespace std;
 
int main(void){
    int n, m;
    long long k;
    cin >> n >> m >> k;
    vector <long long> person(n), apartmens(m);
 
    for(long long & i: person){
        cin >> i;
    }
 
    for(long long & i: apartmens){
        cin >> i;
    }
    sort(person.begin(),person.end());
    sort(apartmens.begin(),apartmens.end());
 
    int  r = 0, ans = 0;
    for(int i = 0;i < n ; i++){
        while(r < m &&apartmens[r]<person[i]-k) r++;
        if(r < m &&apartmens[r]<=person[i]+k){
            ans++;
            r++;
        }
 
    }
    cout << ans << '\n';
    return 0;
 
}