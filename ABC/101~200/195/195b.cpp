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
    long long A, B, W;
    cin >> A >> B >> W;

    W*=1000;

    long long mi = 10e10;
    long long ma = -1;
    bool check = false;
    for(long long i = 1; i<=1000010; i++){
        if(A*i <= W && W<=B*i){
            check = true;
            mi = min(mi,i);
            ma = max(ma,i);
        }

    }

    if(check)cout <<mi << " " << ma << endl;
    else cout << "UNSATISFIABLE" << endl;

}