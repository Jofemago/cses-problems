#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
    string s;
    cin >> s;
 
    long long count1 = -1e7;
    long long count2 = 0;
    char l = s[0];
 
    for(char  c: s){
        if(l == c){
            count2++;
        }else{
            l = c;
            if(count2> count1)
                count1 = count2;
                count2 = 1;
        }
    }
 
    if(count2> count1)
                count1 = count2;
 
    cout << count1 << endl;
    return 0;
}