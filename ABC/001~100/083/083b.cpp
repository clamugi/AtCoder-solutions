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
        int N,A,B;
    cin >> N >> A >> B;
 
    int ans = 0;
    repr(i, 1, N+1) {
        int n = i;
        int keta = 0;
        while (n > 0) {
            keta += n % 10;
            n = n / 10;
        }
        if (A <= keta && keta <=  B) {
            ans += i;
        }
    }
 
    cout << ans << endl;

}