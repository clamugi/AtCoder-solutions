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

    N--;

    vector<int>C(N,0),S(N,0),F(N,0);
    
    rep(i,N){
        cin>> C[i] >> S[i] >> F[i];
    }


    rep(i,N) {
        int ans = 0;
        repr(j,i, N) {
            ans = max(ans, S[j]);
            
            int d = ans - S[j];
            if (d % F[j]) d = F[j] - (d % F[j]);
            else d = 0;
 
            ans += d + C[j];
        }
 
        cout << ans << endl;
    }
    cout << 0 << endl;
}
