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
    cin >> n>> m;
    vector<pair<int, int>>M(m);
    rep(i,m){
        int a, b;
        cin >> a >> b;

        M[i] = make_pair(a,b);
    }

    int k;
    cin >> k;
    vector<pair<int,int>>K(k);
    rep(i,k){
        int c, d;
        cin >> c >> d;
        K[i] = make_pair(c,d);
    }


    int ans = 0;
    int nibu = 1<<k;
    for(int i = 0; i< nibu; i++){
        vector<int>N(n+1,0);
        for(int bit = 0; bit<k; bit++){
            if( (i>>bit) & 1){
                N[K[bit].first] = 1;
            }
            else{
                N[K[bit].second] = 1;
            }
        }

        int ans2 = 0;
        rep(j, m){
            if(( N[M[j].first] == 1 ) && N[M[j].second] == 1 ){
                ans2++;
            }
            ans = max(ans,ans2);
        }
    }

    cout << ans << endl;
}