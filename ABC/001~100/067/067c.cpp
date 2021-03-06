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

    vector<long long>sumA(N+1);
    rep(i,N)sumA[i+1] = sumA[i]+A[i];


    long long ans = INF;
    repr(i,1,N){
        long long x = sumA[i];
        long long y = sumA[N]-sumA[i];
        ans = min(ans,abs(x-y));
    }
    cout << ans << endl;

}