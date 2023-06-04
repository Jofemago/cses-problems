#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(int &i: v){
        cin >> i;
    }
    sort(v.begin(), v.end());
 
    int l=0 , r = n-1;
    int ans = 0;
    while(l <= r){
        ans++;
        if(v[l]+v[r] <= x) l++;
        r--;
 
    }
    cout << ans << "\n";
    return 0;
}