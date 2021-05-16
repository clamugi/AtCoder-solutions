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
 
    vector<int>w(N);
    rep(i,N){
        cin >> w[i];
    }
 
    int ans =100000;
    repr(i,0,N){
        int s1=0;
        int s2=0;
 
        rep(j,i+1){
            s1+= w[j];
        }
        repr(j,i+1,N){
            s2+= w[j];
        }
        ans =min(ans,abs(s1-s2));
    }
 
    cout << ans << endl;
 
}