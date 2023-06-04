#include <bits/stdc++.h> 
using namespace std;
 
int main(){
    long long n;
    cin >> n;
    vector<long long> s(n);
    int lv= n/2;
    int rv=  n - lv + 1;
    int l = 0, r = n- 1;
    int b = 0;
    if(n == 1){
        cout << 1<<'\n';
        return 0;
    }
 
    if( (n-1)<=2 ){
        cout << "NO SOLUTION" << "\n";
        return 0;
    }
 
    while(lv){
        if(b%2==0){
            s[l] = lv;
            s[r] = rv;
        }else{
            s[l] = rv;
            s[r] = lv;
        }
 
        lv--;
        rv++;
        l++;
        r--;
        b++;
 
    }
    if(n%2 != 0) s[(n/2)] =(n/2)+1;
    for(int i = 0; i < n; i++)
        cout << s[i] << " ";
    cout << '\n';
    return 0;
}