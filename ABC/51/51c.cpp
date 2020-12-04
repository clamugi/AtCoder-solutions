#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}

int main(){
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    rep(i,(ty-sy))cout << "U" ;
    rep(i,(tx-sx))cout << "R" ;
    rep(i,(ty-sy))cout << "D" ;
    rep(i,(tx-sx)+1)cout << "L" ;

    rep(i,(ty-sy)+1)cout << "U" ;
    rep(i,(tx-sx)+1)cout << "R" ;
    cout << "DR" ; 
    rep(i,(ty-sy)+1)cout << "D" ;
    rep(i,(tx-sx)+1)cout << "L" ;
    cout << "U" << endl;
}