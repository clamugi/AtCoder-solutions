#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}
double radian(double degree){return degree * PI /180.0;}
double degree(double radian){return radian * 180.0/PI;}

int main(){

    int n, m, x;
    cin >> n >> m >> x;
 
    vector<vector<int>>a(n,vector<int>(m));
    vector<int> c(n);
 
    rep(i,n){
        cin >> c[i];
        for(int j = 0; j<m; j++)cin >> a[i][j];
    }
    int ans = 12345678;
    int all = 1<<n;
    for(int mask = 0; mask < all ; mask++){
        vector<int> level(m);
        int cost =0;
        for(int i = 0; i< n; i++){
            if((mask >> i)&1){
                cost += c[i];
                for(int j = 0; j<m; j++){
                    level[j] += a[i][j];
                }
            }
        }
        bool ok = true;
        for (int j =0; j< m; j++){
            if(level[j] < x)ok = false;
        }
        if(ok)ans = min(ans,cost);
    }
    if(ans == 12345678)cout << -1 << endl;
    else cout << ans << endl;
 
}