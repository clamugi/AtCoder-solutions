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
    int n, k;
    cin >> n >> k;

    vector<int>a(n);
    rep(i,n)cin >> a[i];

    vector<long long>sums(n+1);
    sums[0] = 0;
    repr(i,1,n+1){
        sums[i] = sums[i-1]+a[i-1];
    }

    long long ans = 0;
    for(int i = k; i<=n; i++){
        ans += sums[i]-sums[i-k];
    }

    cout << ans << endl;

}