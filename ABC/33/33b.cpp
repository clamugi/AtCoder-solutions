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

    vector<pair<string,int>>town(N);
    long long sum = 0;
    rep(i,N){
        string s;
        int p;
        cin >> s >> p;
        sum += p;
        town[i] = make_pair(s,p);
    }

    string ans = "atcoder";
    rep(i,N){
        if(town[i].second > sum/2)ans = town[i].first;
    }
    cout << ans << endl;

}