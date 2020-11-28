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
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int ans = -1;
    if(b+1 == a || b == a)ans = x;
    else if (2*x <= y){
        if(a>b)a--;

        ans = x + abs(a-b)*2*x; 
    }
    else{
        if(a>b)a--;

        ans = x + abs(a-b)*y;
    }

    cout << ans << endl;

    


}