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
    long long N;
    cin >> N;

    long long ans =INF;
    long long B = 1;
    for(long long  b =0; b<64; b++){
        long long a,c;
        a = N/B;
        if(a != 0)c = N % (a*B);
        else c = N;
        ans = min(ans, a+b+c);
        B *=2;
    }
    cout << ans << endl;


}
