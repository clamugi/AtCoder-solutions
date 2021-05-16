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
    int N;
    cin >> N;

    vector<int>A(N);
    rep(i,N)cin >> A[i];
    
    vector<long long>p(N+1);
    vector<long long>q(N+1);
    rep(i,N){
        p[i+1] = p[i]+A[i];
        q[i+1] = max(q[i],p[i+1]);
    }

    long long ans = 0;
    long long now = 0;
    rep(i,N+1){
        ans = max(ans, now+q[i]);
        now += p[i];
    }
    cout << ans << endl;
}