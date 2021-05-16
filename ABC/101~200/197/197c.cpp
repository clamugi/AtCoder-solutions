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
    int N;
    cin >> N;

    vector<int>a(N);
    rep(i,N)cin >> a[i];

    long long  ans = 1LL <<32;
    
    for(int bit = 0; bit<(1<<N); bit++){
        long long x = 0;
        int o = 0;
        for(int i = 0; i<N; i++){
            o|=a[i];
            if(bit & (1<<i) || i == N-1){
                x ^= o;
                o = 0;
            }
            else{
            }
        }
        ans = min(ans,x);
    }
    cout << ans << endl;



}