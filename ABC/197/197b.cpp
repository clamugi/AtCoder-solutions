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
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;

    X--;
    Y--;
    vector<string>S(H);
    rep(i,H)cin >> S[i];

    int ans = 0;
    for(int i = X; i<H; i++){
        if(S[i][Y] == '.')ans++;
        else break;
    }
    for(int i = X; i>=0;i--){
        if(S[i][Y] == '.')ans++;
        else break;
    }
    for(int i = Y; i<W; i++){
        if(S[X][i] == '.')ans++;
        else break;
    }
    for(int i = Y; i>=0; i--){
        if(S[X][i] == '.')ans++;
        else break;
    }
    cout << ans-3 << endl;

}