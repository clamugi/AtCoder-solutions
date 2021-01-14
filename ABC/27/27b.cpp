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
    int ave = 0;

    rep(i,n){
        int x;
        cin >> x;
        a[i] = x;
        ave += x;
    }
    
    if(ave%n != 0){
        cout << -1 << endl;;
        return 0;
    }
    else ave /= n;

    int check = 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        check += a[i]-ave;
        if(check != 0){
            ans ++;
        }
    }
    cout << ans << endl;
}