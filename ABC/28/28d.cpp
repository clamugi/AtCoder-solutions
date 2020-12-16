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
    int N, K;
    cin >> N >> K;

    double ans = (N-K)*(K-1.0)*6.0 + (N-1.0)*3.0 +1.0;

    cout << fixed<< setprecision(15) << (double) ans / N/N/N << endl;


}