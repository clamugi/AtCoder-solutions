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
    cin >> s;

    string ans = "";
    rep(i,s.length()){
        if(s[i] == '0'){
            ans += '0';
        }
        else if(s[i] == '1'){
            ans += '1';
        }
        else{
            ans = ans.substr(0,ans.length()-1);
        }
    }
    cout << ans << endl;

}