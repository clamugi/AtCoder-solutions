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

    vector<long long>A(N);

    rep(i,N){
        long long a;
        cin >> a;

        while(a>0 && a%2 == 0){
            A[i]++;    
            a/=2;
        }
    }

    long long ans = 0;
    for(auto x: A){
        ans += x;
    }

    cout << ans << endl;

}