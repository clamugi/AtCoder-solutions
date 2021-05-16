#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}
double radian(double degree){return degree * PI /180.0;}
double degree(double radian){return radian * 180.0/PI;}

int main(){
    int N;
    cin >> N;

    int ans = 0;
    vector<int>s(N);
    rep(i,N){
        cin >> s[i];
        ans += s[i];
    }
    sort(s.begin(),s.end());
    
    if(ans % 10 != 0){
        cout << ans << endl;
        return 0;
    }

    rep(i,N){
        if(s[i] % 10 == 0){
            continue;
        }
        else{
            cout << ans -s[i] << endl;
            return 0;
        }
    }

    cout << 0 << endl;
}