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
    int N, M;
    cin >> N >> M;

    
    vector<vector<int>> light(M);

    rep(i,M){
        int k;
        cin >> k;
        rep(j,k){
            int s;
            cin >> s;
            light[i].push_back(s-1);
        }
    }

    vector<int>p(M);
    rep(i,M)cin >> p[i];

    long long ans = 0;
    for(int bit = 0; bit< (1<<N); bit++){
        bool ok = true;

        for(int i = 0; i<M; i++){
            int con = 0;

            for(auto x: light[i]){
                if(bit & (1<<x))con++;
            }
            if(con % 2 != p[i])ok = false;
        }
        if(ok)ans++;
    }

    cout << ans << endl;


}