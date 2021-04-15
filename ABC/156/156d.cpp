#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}
double radian(double degree){return degree * PI /180.0;}
double degree(double radian){return radian * 180.0/PI;}

// a^n mod を計算する
long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

long long ncr(long long n, long long r){
    long long X = 1;
    long long Y = 1;
    
    for(int i = 1; i<=r; i++){
        X = X*(n-i+1)%MOD;
        Y = Y*i%MOD;
    }
    long long Yinv = modpow(Y,MOD-2,MOD);
    return X*Yinv%MOD;
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    long long ans = modpow(2,n,MOD)-1;
    ans -= ncr(n,a)+ncr(n,b);
    
    while(ans<0)ans += MOD;
    cout << ans << endl;
}

