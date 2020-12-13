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
    int n, m;
    cin >> n >> m;

    if(m == 0){
        cout << 1 << endl;
        return 0;
    }

    vector<int>ao(m);
    rep(i,m)cin >> ao[i];
    sort(ao.begin(),ao.end());
    
    int space = n;
    int mae = 0;
    rep(i,m){
        if(ao[i]-mae-1 == 0){
            mae = ao[i];
            continue;
        }
        space = min(space,ao[i]-mae-1);
        mae = ao[i];
    }
    if(ao[m-1] != n)space = min(space, n-ao[m-1]);

    long long ans = 0;
    rep(i,m-1){
        ans += (ao[i+1]-ao[i]-1+space-1)/space;
    }
    ans += (ao[0]-0-1+space-1)/space;
    ans += (n-ao[m-1]+space-1)/space;

    cout << ans << endl;

}