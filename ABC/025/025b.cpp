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
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    rep(i,n){
        string s;
        int d;
        cin >> s >> d;

        if(d<a){
            d = a;
        }
        else if(d>b){
            d = b;
        }

        if(s == "West"){
            d *= -1;
        }

        ans += d;
    }

    if(ans == 0){
        cout << 0 << endl;
    }
    else if(ans<0){
        cout << "West " << -1*ans << endl;
    }
    else cout << "East " << ans << endl;


}