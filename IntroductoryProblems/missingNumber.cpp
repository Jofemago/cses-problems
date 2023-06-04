#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    long long n, z, x;
    cin >> n ;
    x = n*(n+1)/2;
    for(int i = 0; i < n-1; i++){
        cin >> z;
        x-= z;
 
    }
    cout << x << endl;
 
    return 0;
}