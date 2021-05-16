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

vector<pair<long long, long long> > prime_factorize(long long N){
    vector<pair< long long , long long> > res;
    for(long long a = 2; a* a <= N; a++){
        if(N%a != 0)continue;
        long long ex = 0;
        while(N%a == 0){
            ex++;
            N /= a;
        }
        res.push_back({a,ex});
    }
    if(N!=1)res.push_back({N,1});
    return res;
}

int main(){
    int sx, sy, gx, gy, T, V, n;
    cin >> sx >> sy >> gx >> gy >> T >> V >> n;


    bool can = false;
    rep(i,n){
        double x, y;
        cin  >> x >> y;
        double a = sqrt(pow(sx-x,2) + pow(sy-y,2));
        double b = sqrt(pow(gx-x,2) + pow(gy-y,2));
        if(a + b <= T*V)can = true;
    }

    if(can)cout << "YES" << endl;
    else cout << "NO" << endl;


}