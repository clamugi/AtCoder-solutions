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

int main () {
    int A,B;
 
    cin >> A >> B;
 
    int ans = 0;
    for(int i = A; i< B+1; i++){
        int s = i%10, t  = i/ 10000 % 10;
        int u = i /10 %10, v = i/1000 %10;
        if (s == t && u ==v) ans ++;
            
        }
    cout << ans << endl;
 
}