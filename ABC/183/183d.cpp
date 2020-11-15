#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}

int main (){
    int N, W;
    cin >> N >> W;
    int hi = 1000000;

    vector<long long>S(hi);
    vector<long long>T(hi);


    for(int i = 0; i<N; i++){
        int s, t, p;
        cin >>s >> t >> p;

        S[s] += p;
        T[t] += p;
    }

    vector<long long>sum(hi);
    long long mizu= 0;
    for(int i = 0; i<hi; i++){
        mizu += S[i];
        mizu -= T[i];
        sum[i] = mizu;
    }

    bool check = true;
    rep(i,hi){
        if (sum[i] > W )check = false;
    }

    if(check)cout << "Yes" << endl;
    else cout << "No" << endl;

}