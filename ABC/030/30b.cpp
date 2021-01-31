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
    int n, m;
    cin >> n>> m;

    if(n>=12)n -= 12;

    double h = 30*n + 0.5*m; 
    double s =6*m;
    double ans = abs(h-s);

    if(ans > 180)ans = 360-ans;
    cout << fixed << setprecision(5) << ans << endl;


}