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
    int a[3];
    rep(i,3)cin >> a[i];

    int h = max(a[0],max(a[1],a[2]));
    int l = min(a[0],min(a[1],a[2]));

    rep(i,3){
        if(a[i] == h)cout << 1 << endl;
        else if(a[i] == l)cout << 3 << endl;
        else cout << 2 << endl;
    }
    

}