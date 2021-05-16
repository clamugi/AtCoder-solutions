#include <bits/stdc++.h>
 
using namespace std;
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i< (int) n; i++)
 
 
int main () {
    string s;
    cin >> s;

    int n = s.size();
    int b = n;
    int e = 0;
    rep(i,s.size()){
        if(s[i] == 'A' ){
            if(i < b){
                b = i;
            }
        }
        if(s[i] == 'Z' ){
            if(i > e){
                e = i;
            }
        }
    }

    cout << e-b +1 << endl;


}
