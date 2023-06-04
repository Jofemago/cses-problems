#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin >> n;
 
    vector<int> v(n);
    for(int &i: v){
        cin >> i;
    }
    sort(v.begin(),v.end());
    long long sum = 1;
 
    for(int &value: v){
        if(sum < value){
            break;
        }
        sum += value;
    }
    cout << sum << "\n";
 
    return 0;
}