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
    string s;
    int t;
    cin >> s >> t;

    int x = 0;
    int y = 0;
    int q = 0;
    rep(i,s.length()){
        if(s[i] == 'L')x--;
        else if(s[i] == 'R')x++;
        else if(s[i] == 'U')y++;
        else if(s[i] == 'D')y--;
        else q++;
    }

    int ans = abs(x) + abs(y);
    
    if(t == 1)cout << ans+q << endl;
    else cout << max(ans-q,(int) s.length()%2) << endl;

}