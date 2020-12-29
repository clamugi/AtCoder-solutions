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

    vector<int>r(N);
    rep(i,N)cin >> r[i];

    sort(r.begin(),r.end(),greater<int>());

    double ans = 0.0;
    rep(i,N){
        int R =pow(r[i],2);
        if(i%2 == 0)ans += R;
        else ans -= R;
    }

    cout << fixed << setprecision(10) << ans *PI << endl;
}