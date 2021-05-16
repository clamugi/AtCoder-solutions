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


int N, K;
int T[10][10];
bool flag = false;
void dfs(int a, int b){
    if(a == N){
        if(b == 0)flag = true;
        return ;
    }
    rep(i,K){
        dfs(a+1,(b^T[a][i]));
    }
}

int main(){
    cin >> N >> K;
    rep(i,N){
        rep(j,K){
            cin >> T[i][j];
        }
    }

    dfs(0,0);
    if(flag)cout << "Found" << endl;
    else cout << "Nothing" << endl;

}