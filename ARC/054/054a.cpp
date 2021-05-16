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
    double L, X, Y, S, D;
    cin >> L >> X >> Y >> S >> D;

    double ans, r, l;

    if(S <= D){
        r = (D-S)/(X+Y);
        l = (L-D+S)/(Y-X);
    }
    else{
        r = (L-S+D)/(X+Y);
        l = (S-D)/(Y-X);
    }

    if(Y<X)ans = r;
    else ans = min(r,l);

    cout << fixed << setprecision(10) << ans << endl;


}