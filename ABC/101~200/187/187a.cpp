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
    int a, b;
    cin >> a >> b;

    int a2 = a/100 + a/10%10+ a%10;
    int b2 = b/100 + b/10%10+ b%10;

    cout << max(a2,b2)<< endl;
    
}