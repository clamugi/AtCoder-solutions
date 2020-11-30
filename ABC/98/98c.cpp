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
    string S;
    cin >> N >> S;

    vector<int>W(N+1,0);
    vector<int>E(N+1,0);

    rep(i,N){
        if(S[i] == 'W'){
            W[i+1] = W[i] + 1;
            E[i+1] = E[i];
        }
        else {
            W[i+1] = W[i];
            E[i+1] = E[i]+1;
        }
    }


    int ans = N;
    rep(i,N){
       int num = W[i] + (E[N]-E[i+1]);
       ans = min(ans,num);
    }

    cout << ans << endl;
    
}