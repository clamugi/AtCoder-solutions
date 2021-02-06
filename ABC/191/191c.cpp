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
    int H, W;
    cin >> H >> W;

    vector<string>S(H);
    rep(i,H)cin >>S[i];

    int dx[4] = {0,-1,0,-1};
    int dy[4] = {0,0,-1,-1};

    vector<vector<int>> kado(H-1,vector<int>(W-1));
    for(int i = 0; i<H; i++){
        for(int j = 0; j<W; j++){
            if(S[i][j] == '.')continue;
            
            for(int k = 0; k<4; k++){
                kado[i+dy[k]][j+dx[k]]++;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i<H-1; i++){
        for(int j = 0; j<W-1; j++){
            if(kado[i][j]%2 == 1)ans++;
        }
    }
    cout << ans << endl;

}