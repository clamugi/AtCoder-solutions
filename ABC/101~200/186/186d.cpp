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

    vector<long long >A(N);
    rep(i,N)cin >> A[i];

    sort(A.begin(),A.end());
    vector<long long>sums(N+1);
    sums[0]= 0;
    repr(i,1,N+1)sums[i] = sums[i-1]+A[i-1]; 

    long long ans = 0;
    repr(i,1,N){
        ans += sums[N]-sums[i] - (A[i-1]*(N-i));
    }

    cout << ans << endl;


}