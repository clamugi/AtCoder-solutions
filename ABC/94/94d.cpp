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

    sort(a.begin(),a.end());
    int hi = a[n-1];

    double med = (double)hi/2;
    int r = 0;
    rep(i,n){
        if(abs(a[r]-med) -abs(a[i]-med) >0){
            r = i;
        }
    }

    cout << hi << " " << a[r] << endl;

}