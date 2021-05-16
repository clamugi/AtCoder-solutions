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

    int ans = 100000;
    for(int i = 1; i<=1000; i++){
        for(int j = 1; j<=1000; j++){
            if(i*j > n)continue;

            int sa = abs(i-j);
            int amari = n-i*j;
            ans = min(ans,sa+amari);
        }

    }
    cout << ans << endl;

}