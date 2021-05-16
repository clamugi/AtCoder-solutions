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
    int n;
    cin >> n;

    long long ans = 0;
    vector<int>a(n);
    vector<int>b(n);

    rep(i,n)cin >> a[i];
    rep(i,n)cin >> b[i];

    rep(i,n){
        ans += a[i]*b[i];
    }
    if(ans == 0)cout << "Yes" << endl;
    else cout << "No" << endl;
    
}