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
    int N, X;
    cin >> N >> X;

    long long ans = 0;

    rep(i,N){
        long long v, p;
        cin >> v >> p;

        ans +=  v*p;
        if(ans >X*100){
            cout <<i+1 << endl;
            return 0;
        } 
  
    }
    cout << -1 << endl;
}