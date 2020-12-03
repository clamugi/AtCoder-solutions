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

    vector<pair<int,int>>sch;
    rep(i,N){
        int a, b;
        cin >> a >> b;
        sch.push_back(make_pair(b,a));
    }
    sort(sch.begin(),sch.end());

    long long time = 0;
    bool check = true;
    for(auto x : sch){
        time += x.second;
        if(time > x.first)check = false;
    }
    if(check)cout << "Yes" << endl;
    else cout << "No" << endl;
}