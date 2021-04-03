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

    long long A, B, C, K;
 
    cin >> A >> B>> C >> K ;
 
 
    long long ans=0;
        if(A >= K) {
            ans += K;
            cout << K << endl;
            return 0;
        }else {
            ans += A;
            if (B >= K-A){
                cout << ans << endl;
                return 0;
            }else{
                cout << ans + (K-A-B) *-1 << endl;
                return 0;
            }
        }
    
 
}