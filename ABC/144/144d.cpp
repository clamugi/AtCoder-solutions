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

int main(){
    double a, b, x;
    cin >> a >> b >> x;

    x/= a;
    cout << fixed << setprecision(10);
    if (x > a*b/2) cout << atan2((a*b-x)*2, a*a) * 180 / PI << endl;
    else cout << atan2(b*b, x*2) * 180 / PI << endl;
}