#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}

int main (){
    long long  a, b, c;
    cin >> a >> b >> c;

    long long mod =   998244353;

    long long A, B, C;
    A = ((a+1)*a)/2;
    B = ((b+1)*b)/2;
    C = ((c+1)*c)/2;

    A %= mod;
    B %= mod;
    C %= mod;

    cout << (A*B % mod)*C % mod << endl;

    


}