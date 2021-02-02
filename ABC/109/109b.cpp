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
    int N;
    cin >> N;

    vector<string>S(N);
    rep(i,N)cin >> S[i];

    bool check = true;
    rep(i,N-1){
        if(S[i][S[i].length()-1] != S[i+1][0])check = false;
    }

    sort(S.begin(),S.end());
    rep(i,N-1){
        if(S[i] == S[i+1])check = false;
    }

    if(check)cout <<"Yes" << endl;
    else cout  << "No" <<endl;
}