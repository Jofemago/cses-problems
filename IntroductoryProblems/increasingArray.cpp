#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    long long n,k, x, res = 0;
 
    cin >> n;
    cin >> k;
    do{
 
        if (n == 1){
            break;
        }
        cin >> x;
        if(k > x){
            res += k-x;
        }else{
            k = x;
        }
        n--;
    } while (n-1);
 
    cout << res << '\n';
    return 0;
}