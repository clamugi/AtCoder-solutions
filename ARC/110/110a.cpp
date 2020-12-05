#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (long long a, long long b){return  (long long) a*b /gcd(a,b);}

int main(){
    int N;
    cin >> N;

    long long ans = 2;
    for(long long i = 2; i<=N; i++){
        ans = lcm(ans,i);
    }
    cout << ans +1 << endl;


}