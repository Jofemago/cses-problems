#include <bits/stdc++.h>
using namespace std;
 
 
int main () {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int &i:v){
        cin >> i;
    }
    sort(v.begin(), v.end());
 
    int ans = 1;
    for(int i =  1; i < n;i++){
        ans += v[i] !=  v[i-1];
    }
 
    cout<< ans << "\n";
    return 0;
 
}