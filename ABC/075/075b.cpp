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
    rep(i,H)cin >> S[i];

    int dx[8] = {-1,0,1,-1,1,-1,0,1};
    int dy[8] = {1,1,1,0,0,-1,-1,-1};

    for(int i = 0; i<H; i++){
        for(int j = 0; j<W; j++){
            if(S[i][j] == '#'){
                cout << '#';
                continue;
            }

            int ans = 0;
            for(int d = 0; d<8; d++){
                int x = j+dx[d];
                int y = i+dy[d];

                if(x <0 || x>=W || y<0 || y>=H)continue;
                else if( S[y][x] == '#')ans++;
                else continue;
            }

            cout << ans ;
        }
        cout << endl;
    }
}