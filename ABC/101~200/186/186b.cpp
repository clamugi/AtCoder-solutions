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
    int H, W;
    cin >> H >> W;

    int mins = 1000;
    vector<vector<int>> A(H,vector<int>(W));
    rep(i,H){
        rep(j,W){
            int a;
            cin >> a;
            mins = min(mins,a);
            A[i][j] = a;
        }
    }

    int ans = 0;
    rep(i,H){
        rep(j,W){
            ans += A[i][j] - mins;
        }
    }
    cout << ans << endl;

}