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
    int n, t;
    cin >> n >> t;

    vector<int>a(n);
    rep(i,n)cin >> a[i];

    long long ans = 0;
    int now = 0;
    for(int i = 0; i<n-1; i++){
        ans += min(t,a[i+1]-now);
        now = a[i+1];
    }
    ans += t;

    cout << ans << endl;
}