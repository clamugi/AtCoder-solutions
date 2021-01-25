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
    int n, X;
    cin >> n >> X;

    vector<int>a(n);
    rep(i,n)cin >> a[i];

    int ni = 1<<n;

    long long ans = 0;
    for(int p = 0; p < n; p++){
        if( (X>>p) & 1){
            ans += a[p];
        }
    }
    cout << ans << endl;
}