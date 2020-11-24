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
    int xa, ya, xb, yb, xc, yc;
    cin >>xa >> ya >> xb >> yb >> xc >> yc;

    double ans = 0.0;
    int a, b, c, d;
    a = xb-xa; b = yb-ya; c = xc-xa; d = yc-ya;
    ans = (double) abs(a*d-b*c)/2;
    cout << fixed << setprecision(5) << ans << endl;
}