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
    int A, B;
    cin >> A >> B;
    int a = A % 100 + 900,b = B % 100 + 100;
    int a2 = A / 100 * 100 + 90 + A % 10,b2 = B / 100 * 100 + B % 10;
    int a3 = A / 10 * 10 + 9,b3 = B / 10 * 10;
    cout << max({a - B,A - b,a2 - B,A - b2,a3 - B,A - b3}) << "\n";
}