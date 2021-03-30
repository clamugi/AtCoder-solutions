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

    vector<long long >S(5);
    rep(i,N){
        string s;
        cin >> s;

        if(s[0] == 'M')S[0] += 1;
        else if(s[0] == 'A')S[1] += 1;
        else if(s[0] == 'R')S[2] += 1;
        else if(s[0] == 'C')S[3] += 1;
        else if(s[0] == 'H')S[4] += 1;
    }

    long long ans = 0;
    ans += S[0] * S[1] * S[2];
    ans += S[0] * S[1] * S[3];
    ans += S[0] * S[1] * S[4];
    ans += S[0] * S[2] * S[3];
    ans += S[0] * S[2] * S[4];
    ans += S[0] * S[3] * S[4];

    ans += S[1] * S[2] * S[3];
    ans += S[1] * S[2] * S[4];
    ans += S[1] * S[3] * S[4];

    ans += S[2] * S[3] * S[4];

    cout << ans << endl;
}