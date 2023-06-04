#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n, x, y;
 
    cin >> n;
 
    for(int i = 0; i < n; i++){
        cin >> y >> x;
        long long c = max(x,y);
        if (c % 2 == 0)
            swap(x,y);
        cout << c*c - (y-1) - (c-x) <<"\n";
                        
    }    return 0;
}