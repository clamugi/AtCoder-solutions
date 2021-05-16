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
    int H, W, K;
    cin >> H >> W >> K;

    vector<string>board(H);
    rep(i,H)cin >> board[i];

    int ans = 0;
    for(int bith =0; bith<(1 << H);bith++){
        for(int bitj = 0; bitj < (1<< W); bitj++){
            int black =0;
            for(int i = 0; i< H; i++){
                for(int j = 0; j<W; j++){
                    if(bith  & (1<<i))continue;
                    if(bitj  & (1<<j))continue;
                    if(board[i][j] == '#')black++;
                }
            }
            if( black == K)ans++;
        }
    }

    cout << ans << endl;


}