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
    int N, K;
    cin >> N >> K;

    vector<double>ex(1010,0);
    double a = 0;
    for(int i = 1; i<=1000; i++){
        ex[i] = (a+i)/i;
        a +=i;
    }

    vector<double>p(N);
    rep(i,N)cin >> p[i];

    vector<double>sums(N+1);
    sums[0] = 0;
    for(int i = 1; i<=N; i++){
        sums[i] = ex[p[i-1]] + sums[i-1];
    }

    double ans = 0;
    for(int i = 0; i<N-K+1; i++){
        ans = max(ans, sums[i+K]-sums[i]);
    }
    cout << fixed << setprecision(10) <<ans << endl;


}