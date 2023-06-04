#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
    long long n;
    cin >> n;
    for(int i = 1; i <= n ; i++){
        long long N = i*i;
        cout << N*(N-1)/2 - 4*(i-1)*(i-2) << "\n";
    }
    return 0;
}