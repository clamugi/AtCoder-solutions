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

    long long ans = 0;
    long long mi = 10000000000;
    int ms = 0;

    for(int i = 0; i<N; i++){
        long long a;
        cin >> a;

        if(a<0)ms++;
        mi = min(mi,abs(a));
        ans += abs(a);
    }

    if(ms %2 == 1)ans -= mi*2;
    cout << ans << endl;


}

