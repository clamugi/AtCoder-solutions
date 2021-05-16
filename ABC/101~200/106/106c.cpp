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
    string S;
    long long K;
    cin >> S >> K;

    char ans = '1';
    int num = -1;
    rep(i,S.length()){
        if(S[i] != '1'){
            ans = S[i];
            num = i;
            break;
        }
    }

    if(K>num)cout << ans << endl;
    else cout << 1 << endl;

}