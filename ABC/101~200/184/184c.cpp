#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}

int main(){
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int r = abs(r2-r1), c = abs(c2-c1);
    int ans = 3;
    if( r == 0 && c == 0)ans = 0;
    else if( r == c || r + c <=3 )ans = 1;
    else if ((r + c)% 2 == 0 || r + c <= 6 || abs(r-c) <= 3)ans = 2;
    cout << ans << endl;

}