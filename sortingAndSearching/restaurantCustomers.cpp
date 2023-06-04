#include <bits/stdc++.h>
using namespace std;
 
typedef pair<int, int >  ii;
int main(){
    int n;
    cin >> n;
    vector<ii> v(n);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >>b;
        v.push_back(ii(a,1));
        v.push_back(ii(b,-1));
    }
    sort(v.begin(), v.end());
    
    int ans = 0, sum = 0;
    for(ii & value: v){
        sum += value.second;
        ans = max(ans, sum);
    }
    cout << ans << "\n";
    return 0;
}