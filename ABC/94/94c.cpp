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
    int n;
    cin >> n;

    vector<int>a(n);
    rep(i,n)cin >> a[i];

    vector<int>b = a;
    sort(b.begin(),b.end());
    int med1 = b[(n/2) -1];
    int med2 = b[n/2];

    rep(i,n){
        if(a[i]<=med1)cout << med2 << endl;
        else cout << med1 << endl;
    }
}